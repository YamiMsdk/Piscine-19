/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:01:49 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/07 21:02:06 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rushline(int x)
{
	int	a;

	ft_putchar('o');
	a = x - 2;
	while (a > 0)
	{
		ft_putchar('-');
		a--;
	}
	if (x > 1)
		ft_putchar('o');
}

void	rushmiddle(int x, int y)
{
	int	a;
	int	b;

	b = y - 2;
	while (b > 0)
	{
		ft_putchar('|');
		a = x - 2;
		while (a > 0)
		{
			ft_putchar(' ');
			a--;
		}
		if (x > 1)
			ft_putchar('|');
		b--;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	b;

	if (x < 1 || y < 1)
		return ;
	rushline(x);
	ft_putchar('\n');
	b = y - 2;
	if (b > 0)
		rushmiddle(x, y);
	if (y > 1)
		rushline(x);
}
