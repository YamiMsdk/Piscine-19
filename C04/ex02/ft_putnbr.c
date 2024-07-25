/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:48:09 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/18 12:25:01 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	chiffre;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write (1, "-", 1);
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		chiffre = nb % 10 + '0';
		write (1, &chiffre, 1);
	}
}
/*
   int main()
   {
   int nb;
   nb = -5426;
   ft_putnbr(nb);
   }
*/
