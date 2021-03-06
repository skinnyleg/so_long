/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:01:13 by hmoubal           #+#    #+#             */
/*   Updated: 2022/02/06 17:08:10 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_free(t_map *map, int map_height)
{
	int	i;

	i = 0;
	while (i < map_height)
	{
		free(map->map[i]);
		i++;
	}
	map->map = NULL;
}

int	key_hook(int keycode, t_map *map)
{
	ft_keyhook(map, keycode);
	return (0);
}

int	ft_close(t_map *map)
{
	ft_free(map, map->height);
	exit(0);
	return (0);
}

int	ft_so_long(t_map *map)
{
	if (ft_create_win(map) == 1)
		return (ft_putstr("mlx error"), 0);
	ft_init(map);
	ft_fillmap(map);
	mlx_hook(map->win, 2, 0, &key_hook, map);
	mlx_hook(map->win, 17, 0, &ft_close, NULL);
	mlx_loop(map->mlx);
	return (0);
}

int	main(int ac, char **av)
{
	t_cont	more;
	t_map	map;

	if (ac == 2)
	{
		if (ft_ber(av[1]) == 0)
			return (0);
		ft_init2(&map, &more);
		ft_fill_size(av[1], &map);
		if (ft_ifchecks(av[1], &map, &more) == 0)
			return (0);
		ft_so_long(&map);
	}
	else
		ft_putstr("error syntaxe\n");
	return (0);
}
