/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:54:19 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/18 19:07:34 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	signes;
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	signes = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signes++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	if (signes % 2 == 0)
		return (nb);
	else
		return (-nb);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "–2147483648";
	printf("%d", ft_atoi(str));
}
*/
