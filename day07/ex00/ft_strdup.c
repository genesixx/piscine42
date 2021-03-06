/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:22:40 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 14:38:35 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str++))
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char *dest;
	char *cpy;

	if ((dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))) == NULL)
		return (NULL);
	cpy = dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (cpy);
}
