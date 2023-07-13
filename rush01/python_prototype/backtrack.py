#!/usr/bin/env python3

import os
import sys
from time import sleep

# PADDING = int(os.popen('tput cols').read()) // 3 # '// 2 - 6' for exact middle for n=4
PADDING = 5
DEBUG = True

def get_board_dim(board: list) -> int:
    return int(len(board) ** 0.5)

def get_row(board: list, pos: int) -> list:
    board_dim = get_board_dim(board)
    row_start = pos // board_dim * board_dim
    row = board[
        row_start
        :
        row_start + board_dim
        :
        1
    ]
    return row

def get_col(board: list, pos: int) -> list:
    board_dim = get_board_dim(board)
    column_start = pos % board_dim
    column = board[
        column_start
        :
        board_dim**2 - (board_dim - column_start) + 1
        :
        board_dim
    ]
    return column

def get_candidates(board: list, next_cell_idx: int) -> list:
    all_candidates = set(range(1 + get_board_dim(board)))
    row = get_row(board, next_cell_idx)
    column = get_col(board, next_cell_idx)

    for candidate in all_candidates.copy():
        if candidate in row:
            all_candidates.discard(candidate)
            continue
        if candidate in column:
            all_candidates.discard(candidate)
            continue
    return all_candidates

def get_clues(board: list, border: list, pos: int) -> list:
    board_dim = get_board_dim(board)
    col_idx = pos // board_dim
    row_idx = pos % board_dim
    colup = border[row_idx]
    coldown = border[row_idx + board_dim]
    rowleft = border[col_idx + board_dim * 2]
    rowright = border[col_idx + board_dim * 3]
    clues = [colup, coldown, rowleft, rowright]
    return clues

def check_clue(slice: list, clue: int) -> bool:
    clue = int(clue)
    peak = 0
    visible_towers = 0

    if slice[0] == 0:
        return True

    board_dim = len(slice)
    for i, tower in enumerate(slice):
        if tower > peak:
            peak = tower
            visible_towers += 1
        if visible_towers > clue:
            return False
        if clue + tower > board_dim + 1 + i:
            return False
    if 0 not in slice:
        return visible_towers == clue
    else:
        return True

def is_valid_state(board: list, border: list, next_cell_idx: int) -> bool:
    clues = get_clues(board, border, next_cell_idx)
    row = get_row(board, next_cell_idx)
    column = get_col(board, next_cell_idx)

    satisfies_clues = all([
        check_clue(column,       clues[0]),
        check_clue(row,          clues[2]),
        check_clue(column[::-1], clues[1]),
        check_clue(row[::-1],    clues[3]),
    ])
    return satisfies_clues

def print_board(board: list, border: list) -> None:
    padding = ' ' * PADDING
    board_dim = get_board_dim(board)
    print(end=padding + '  ')
    print(' '.join(border[:board_dim]))
    for i in range(board_dim):
        print(end=padding + border[i + board_dim * 2] + '|')
        for j in range(board_dim):
            print(board[j + i * board_dim], end=' ')
        print(end='\b|')
        print(end=border[i + board_dim * 3])
        print(end='\b\n')
    print(end=padding + '  ')
    print(' '.join(border[board_dim:board_dim * 2]))
    print()

def backtrack_skyscrapers(board: list, sols: list, border: list) -> None:
    if board.count(0) == 0:
        sols.append(board)
        print_board(sols[0], border)
        sys.exit(0)
    next_cell_idx = board.index(0)
    candidates = get_candidates(board, next_cell_idx)
    for candidate in candidates:
        board[next_cell_idx] = candidate
        if DEBUG:
            input()
            os.system('clear')
            print_board(board, border)
        if is_valid_state(board, border, next_cell_idx):
            backtrack_skyscrapers(board, sols, border)
        board[next_cell_idx] = 0

def main(*args, **kwargs) -> None:
    if kwargs:
        print('Error (kwargs)')
        sys.exit(1)
    if len(args) != 1:
        print('Error (args)')
        sys.exit(2)

    try:
        border = args[0].split()
    except:
        print('Error (could not split)')
        sys.exit(3)
    board_dim = len(border) / 4
    if board_dim != int(board_dim):
        print('Board is not square')
        sys.exit(4)
    else:
        board_dim = int(board_dim)

    board = [
        0 for _ in range(board_dim ** 2)
    ]
    solutions = []
    backtrack_skyscrapers(board, solutions, border)
    # print(solutions)

if __name__ == '__main__':
    # main('1 1 1 1') # 1 x 1
    # main('2 1 1 2 2 1 1 2') # 2 x 2
    # main('3 2 1 1 2 2 3 2 1 1 2 2') # 3 x 3
    # main('4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2') # original problem
    # main('3 2 2 1 1 2 1 1 4 2 1 2 1 2 2 2') # henri's problem
    main('2 1 2 3 3 2 3 1 3 2 2 1 3 3 2 3 4 2 1 2') # 5 x 5
    # main('1 2 2 4 3 5 4 4 2 2 2 1 1 2 3 4 2 4 5 3 3 2 2 1') # 6 x 6
    # main('6 3 1 3 3 3 2 1 2 3 3 3 3 3 3 7 3 4 3 2 1 2 1 2 2 3 3 4') # 7 x 7
    # main('7 4 2 3 3 2 1 1 2 2 2 3 4 6 6 5 4 2 3 2 1 1 2 2 4 2 4 4') # 7 x 7
    # main('4 3 4 1 5 4 3 2 2 4 2 4 1 3 5 4 3 3 5 2 3 1 3 2 2 1 2 3 2 4 3 3') # 8 x 8
