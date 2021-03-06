/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:10:07 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 21:11:27 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_search(char *str, char *little)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == little[j] && str[i + 1] == little[j + 1]
			&& str[i + 2] == little[j + 2] && str[i + 3] == little[j + 3]
			&& str[i + 4] == '\0')
			return (1);
		i++;
	}
	return (0);
}
