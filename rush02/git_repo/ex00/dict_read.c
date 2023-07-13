/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:50:54 by smatthes          #+#    #+#             */
/*   Updated: 2023/04/02 20:12:39 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

char	***read_dict(char *file_path, char ***key_val_arr)
{
	int		fd;
	int		ret_read;
	int		file_len;
	char	*raw_dict_buf;

	file_len = get_file_len(file_path);
	if (!file_len)
		return (NULL);
	fd = open_file(file_path);
	if (!fd)
		return (NULL);
	raw_dict_buf = malloc(sizeof(*raw_dict_buf) * (file_len + 1));
	ret_read = read(fd, raw_dict_buf, file_len);
	raw_dict_buf[file_len] = '\0';
	if (ret_read < 1)
		return (NULL);
	if (!check_dict_validity(raw_dict_buf))
		return (NULL);
	extract_vals_raw_data(raw_dict_buf, key_val_arr);
	fd = close_file(fd);
	if (!fd)
		return (NULL);
	free(raw_dict_buf);
	return (key_val_arr);
}

int	close_file(int fd)
{
	if (close(fd) == -1)
		return (0);
	return (1);
}

int	open_file(char *file_path)
{
	int	fd;

	fd = open(file_path, O_RDONLY, 0777);
	if (fd == -1)
	{
		return (0);
	}
	return (fd);
}

int	get_file_len(char	*file_path)
{
	int		file_len;
	int		ret;
	char	*buf;
	int		fd;
	int		read_size;

	file_len = 0;
	read_size = 10;
	buf = malloc(sizeof(*buf) * (read_size + 1));
	fd = open_file(file_path);
	if (!fd)
		return (0);
	ret = read(fd, buf, read_size);
	while (ret > 0)
	{
		file_len += ret;
		ret = read(fd, buf, read_size);
	}	
	buf[ret] = '\0';
	fd = close_file(fd);
	if (!fd)
		return (0);
	free(buf);
	return (file_len);
}
