/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:02:23 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/21 16:20:40 by ymoussad         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	int nb = 13;
	printf("%d", ft_is_prime(nb));

}
*/
