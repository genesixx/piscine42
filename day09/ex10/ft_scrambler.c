/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:17:28 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 09:22:37 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;
	int temp2;
	int temp3;

	temp = *******c;
	*******c = ***a;
	temp2 = ****d;
	****d = temp;
	temp3 = *b;
	*b = temp2;
	***a = temp3;
}
