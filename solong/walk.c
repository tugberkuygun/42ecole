/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:59:18 by tuygun            #+#    #+#             */
/*   Updated: 2023/08/01 22:16:27 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	putchr(t_game *general, int keycode)
{
	if (keycode == KEY_D)
		general->chr->chr_chr = general->chr->chr_right;
	if (keycode == KEY_A)
		general->chr->chr_chr = general->chr->chr_left;
	if (keycode == KEY_W)
		general->chr->chr_chr = general->chr->chr_back;
	if (keycode == KEY_S)
		general->chr->chr_chr = general->chr->chr_front;
}

void	print_score(t_game *general)
{
	ft_printf("%d\n", general->chr->point);
}

void	move_p(t_game *general, int side, int x, int y)
{
	if (general->map->coin_count == 0 && general->map->mappin[y ]
		[x ] == 'E')
	{
		general->chr->point += 1;
		print_score(general);
		write(1, "Well Done!\n", 12);
		close_frame(general);
	}
	if (general->map->mappin[y ][x ] != '1' 
					&& general->map->mappin[y ][x ] != 'E')
	{
		putchr(general, side);
		general->chr->point += 1;
		if (general->map->mappin[y ][x ] == 'C')
			general->map->coin_count -= 1;
		general->map->mappin[general->chr->loc_y ]
		[general->chr->loc_x ] = '0';
		general->map->mappin[general->map->loc_end_y ]
		[general->map->loc_end_x ] = 'E';
		general->map->mappin[y ][x ] = 'P';
		print_score(general);
	}
}

int	walk(int keycode, t_game *general)
{
	mlx_clear_window(general->mlx, general->window);
	if (keycode == KEY_D)
		move_p(general, keycode, general->chr->loc_x + 64, general->chr->loc_y);
	if (keycode == KEY_A)
		move_p(general, keycode, general->chr->loc_x - 64, general->chr->loc_y);
	if (keycode == KEY_W)
		move_p(general, keycode, general->chr->loc_x, general->chr->loc_y - 64);
	if (keycode == KEY_S)
		move_p(general, keycode, general->chr->loc_x, general->chr->loc_y + 64);
	if (keycode == KEY_ESC)
		close_frame(general);
	screen_print(general);
	return (keycode);
}
