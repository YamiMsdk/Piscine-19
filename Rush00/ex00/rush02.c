/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:02:55 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/07 21:03:08 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rushline(int x)
{
	int	a;

	ft_putchar('A');
	a = x - 2;
	while (a > 0)
	{
		ft_putchar('B');
		a--;
	}
	if (x > 1)
		ft_putchar('A');
}

void	rushmiddle(int x, int y)
{
	int	a;
	int	b;

	b = y - 2;
	while (b > 0)
	{
		ft_putchar('B');
		a = x - 2;
		while (a > 0)
		{
			ft_putchar(' ');
			a--;
		}
		if (x > 1)
			ft_putchar('B');
		b--;
		ft_putchar('\n');
	}
}

void	rushbottom(int x)
{
	int	a;

	ft_putchar('C');
	a = x - 2;
	while (a > 0)
	{
		ft_putchar('B');
		a--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
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
		rushbottom(x);
}
