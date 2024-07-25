/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:22:54 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/21 16:21:02 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	div;

	div = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb <= 1)
		return (0);
	while (nb >= div * div)
	{
		if (nb % div == 0)
			return (0);
		div = div + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int nb = 14;
	printf("%d", ft_find_next_prime(nb));

}
*/
