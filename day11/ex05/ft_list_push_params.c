/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:49:56 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/22 13:51:46 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*head;
	int		i;

	i = -1;
	head = 0;
	while (++i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = head;
		head = new;
	}
	return (head);
}
