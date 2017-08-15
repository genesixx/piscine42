/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:16:47 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/14 10:28:52 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	while (tab[++i])
	{
		if ((*f)(tab[i]) == 1)
			return (1);
	}
	return (0);
}
