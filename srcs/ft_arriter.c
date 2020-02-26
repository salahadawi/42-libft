/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arriter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuokka <vkuokka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:18:03 by vkuokka           #+#    #+#             */
/*   Updated: 2020/02/26 11:02:17 by vkuokka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arriter(char **arr, void (*f)(const char *))
{
	int i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		(*f)(arr[i]);
		i++;
	}
}
