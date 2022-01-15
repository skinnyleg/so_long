/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:26:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 04:05:42 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_next(t_map *map, t_srcs *srcs)
{
	if (map->k == 0)
	{
		mlx_destroy_image(map->mlx, srcs->player);
		srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player2.xpm",
				&(srcs->width), &(srcs->height));
		map->k = 1;
	}
	else if (map->k == 1)
	{
		mlx_destroy_image(map->mlx, srcs->player);
		srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player.xpm",
				&(srcs->width), &(srcs->height));
		map->k = 0;
	}
	ft_error(srcs->width, srcs->height, map);
	ft_clear(map);
	ft_fillmap(srcs, map);
	ft_move(map);
}

void	ft_move(t_map *map)
{
	char	*line;

	line = NULL;
	mlx_string_put(map->mlx, map->win, 10, 30, 10, "moves:");
	(map->moves) += 1;
	line = ft_itoa(map->moves);
	mlx_string_put(map->mlx, map->win, 70, 30, 10, line);
	free(line);
	line = NULL;
}
