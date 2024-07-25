/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:18:03 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/21 16:18:56 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power == 0)
	{
		nb = 1;
		return (nb);
	}
	if (power == 0 && nb == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power -1)));
}
/*
#include <stdio.h>
int main() 
{
int nb = 1;
int power = 2;

printf("%d", ft_recursive_power(nb, power));
}
*/
