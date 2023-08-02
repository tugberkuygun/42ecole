/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:59:01 by tuygun            #+#    #+#             */
/*   Updated: 2023/08/01 22:23:12 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_windows(t_game *general, char *argv_incoming)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	general->map = read_map(argv_incoming);
	general->height = general->map->height  ;
	general->width = general->map->width  ;
	get_image(general, x, y);
	black_hole_control(general);
	map_size_control(general);
	player_control(general);
	frame_control(general);
	coin_control(general);
	character_control(general);
}

int	close_frame(void *deneme)
{
	t_game	*general;
	int		i;
	int a=0;
	general = deneme;
	i = 0;
	while(a <= (general->height))
	{
		free(general->map->mappin[a]);
		a++;
	}
	system("leaks so_long");
	mlx_destroy_image(general->mlx, general->chr->chr_front);
	mlx_destroy_image(general->mlx, general->chr->chr_back);
	mlx_destroy_image(general->mlx, general->chr->chr_left);
	mlx_destroy_image(general->mlx, general->chr->chr_right);
	mlx_destroy_image(general->mlx, general->black_hole);
	mlx_destroy_image(general->mlx, general->wall);
	mlx_destroy_image(general->mlx, general->coin);
	mlx_destroy_image(general->mlx, general->path);
	free(general->chr);
	free(general->map->mappin);
	mlx_destroy_window(general->mlx, general->window);
	exit(1);
	return (1);
}

int	main(int argc, char **argv)
{
	t_game	general;

	if (argc == 2)
	{
		xpm_control_obje();
		xpm_control_character();
		map_ber_control(argv[1]);
		map_file_control(argv[1]);
		map_empty_control(argv[1]);
		open_windows(&general, argv[1]);
		screen_print(&general);
		placeholder(&general, general.map->loc_end_x ,
			general.map->loc_end_y );
		mlx_hook(general.window, 2, (1L << 0), walk, &general);
		mlx_hook(general.window, 17, 0, close_frame, &general);
		mlx_loop(general.mlx);
	}
	else
	{
		write(1, "check the arguements\n", 22);
		exit(1);
	}
	return (0);
}
