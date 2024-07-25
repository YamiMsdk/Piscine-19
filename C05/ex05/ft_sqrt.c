/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:39:18 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/21 16:20:16 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	g;
	long	d;
	long	centre;
	long	carre;

	g = 0;
	d = nb;
	carre = 0;
	if (nb < 0)
		return (0);
	while (g <= d)
	{
		centre = g + (d - g) / 2;
		carre = centre * centre;
		if (carre == nb)
			return (centre);
		if (carre < nb)
		{
			g = centre + 1;
		}
		else
			d = centre - 1;
	}
	return (0);
}
/*
#include <stdio.h>
int main()

{
	int nb = 64;
	printf("%d", ft_sqrt(nb));

}
*/
