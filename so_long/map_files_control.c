/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_files_control.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:58:21 by tuygun            #+#    #+#             */
/*   Updated: 2023/08/01 19:40:07 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_empty_control(char *argv_incoming)
{
	char	*line;
	int		file;

	file = open(argv_incoming, O_RDONLY);
	while (1)
	{
		line = get_next_line(file);
		if (!line)
			break ;
		if (ft_strlen(line) == 1 && line[0] == '\n')
		{
			write(1, "Empty line\n", 12);
			free(line);
			close(file);
			exit(1);
		}
		free(line);
	}
	close(file);
}

void	map_ber_control(char *argv_incoming)
{
	int	len;

	len = ft_strlen(argv_incoming);
	if (argv_incoming[len - 1] != 'r' || argv_incoming[len - 2] != 'e'
		|| argv_incoming[len - 3] != 'b' || argv_incoming[len - 4] != '.')
	{
		write(1, "Map File Extension Incorrect\n", 30);
		exit(1);
	}
}

void	map_file_control(char *argv_incoming)
{
	int	file;

	file = open(argv_incoming, O_RDWR);
	if (file <= 0)
	{
		write(1, "Unable to Open Map File\n", 25);
		close(file);
		exit(1);
	}
	close(file);
}

char	*read_file(char *argv_incoming)
{
	char	*line;
	char	*rez;
	int		file;

	file = open(argv_incoming, O_RDONLY);
	rez = NULL;
	while (1)
	{
		line = get_next_line(file);
		if (!line)
			break ;
		strappend(&rez, line);
		free(line);
	}
	close(file);
	return (rez);
}

t_map	*read_map(char *argv_incoming)
{
	t_map	*rez;
	char	*map;

	rez = ft_calloc(1, sizeof(t_map));
	map = read_file(argv_incoming);
	if (map == NULL)
	{
		write(1, "Map Sent Empty..\n", 18);
		free(rez);
		exit(1);
	}
	rez->mappin = ft_split(map, '\n');
	rez->height = 0;
	while (rez->mappin[rez->height])
		rez->height++;
	rez->width = ft_strlen(rez->mappin[0]);
	free(map);
	return (rez);
}
