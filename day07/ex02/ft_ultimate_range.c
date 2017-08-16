/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:44:35 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/16 08:50:50 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	if ((*range = (int*)malloc(sizeof(*range) * (max - min))) == NULL)
		return (0);
	i = min;
	while (i < max)
		**(range++) = i + min;
	return (max - min);
}
