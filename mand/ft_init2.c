/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 05:05:54 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 03:56:34 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init2(t_map *map, t_cont *more)
{
	map->moves = 0;
	map->i = 0;
	map->j = 0;
	more->collect = 0;
	more->exit = 0;
	more->player = 0;
	map->width = 0;
	map->height = 0;
	return ;
}
