/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:34:51 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/15 11:29:21 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str++))
		n++;
	return (n);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char				*cpy;
	unsigned int		k;

	cpy = dest;
	i = 0;
	k = ft_strlen(src);
	while (i < n)
	{
		if (i < k)
			*(dest++) = *(src++);
		else
			*(dest++) = '\0';
		i++;
	}
	return (cpy);
}
