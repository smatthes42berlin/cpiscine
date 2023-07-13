/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:09 by smatthes          #+#    #+#             */
/*   Updated: 2023/03/18 17:53:10 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_line(int width, char left_char, char sep_char, char right_char);
void	print_first_line(int x, char first_last_sep);
void	print_middle_lines(int x, int y_minus_2);
void	print_last_line(int x, char first_last_sep);
long	ensure_pos(int i);

void	rush(int x, int y)
{
	char	first_last_sep;
	long	x_l;
	long	y_l;

	x_l = ensure_pos(x);
	y_l = ensure_pos(y);
	first_last_sep = 'B';
	if (x_l == 0 || y_l == 0)
	{
		return ;
	}
	print_first_line(x, first_last_sep);
	if (y_l > 1)
	{			
		if (y_l > 2)
		{
			print_middle_lines(x, y_l - 2);
		}
		print_last_line(x, first_last_sep);
	}
}

long	ensure_pos(int i)
{
	long	l_i;

	l_i = (long)i;
	if (i < 0)
	{
		l_i = (long)(i * -1);
		write(1, "negative was converted to positive", 20);
	}
	return (l_i);
}

void	print_first_line(int x, char first_last_sep)
{
	char	top_left_corner;
	char	top_right_corner;

	top_left_corner = 'A';
	top_right_corner = 'C';
	print_line(x, top_left_corner, first_last_sep, top_right_corner);
	ft_putchar('\n');
}

void	print_last_line(int x, char first_last_sep)
{
	char	bottom_left_corner;
	char	bottom_right_corner;

	bottom_left_corner = 'C';
	bottom_right_corner = 'A';
	print_line(x, bottom_left_corner, first_last_sep, bottom_right_corner);
	ft_putchar('\n');
}

void	print_middle_lines(int x, int y_minus_2)
{
	int		counter;
	char	vertical_sep;
	char	spac_sep;

	vertical_sep = 'B';
	spac_sep = ' ';
	counter = 0;
	while (counter < y_minus_2)
	{
		print_line(x, vertical_sep, spac_sep, vertical_sep);
		counter++;
		ft_putchar('\n');
	}
}
