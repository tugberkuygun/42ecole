/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:58:02 by tuygun            #+#    #+#             */
/*   Updated: 2023/07/26 13:58:04 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	character_control(t_game *general)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (general->map->mappin[++i])
	{
		while (general->map->mappin[i][++j])
		{
			if (general->map->mappin[i][j] != '0'
				&& general->map->mappin[i][j] != '1'
				&& general->map->mappin[i][j] != 'P'
				&& general->map->mappin[i][j] != 'C'
				&& general->map->mappin[i][j] != 'E')
			{
				write(1, "There is an Unidentified Character on the Map\n", 47);
				close_frame(general);
			}
		}
		j = 0;
	}
}

void	coin_control(t_game *general)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (general->map->mappin[++i])
	{
		while (general->map->mappin[i][++j])
		{
			if (general->map->mappin[i][j] == 'C')
			{
				general->map->coin_count++;
			}
		}
		j = 0;
	}
	if (general->map->b_h_count < 1)
	{
		write(1, "Must Have At Least One Collectible Object\n", 43);
		close_frame(general);
	}
}
