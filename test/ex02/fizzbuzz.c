/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:22:50 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 21:04:35 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fizzbuzz(int nbr)
{
	char ch;
	if (nbr > 9)
		fizzbuzz(nbr/10);
	ch = nbr % 10 + '0';
	write (1, &ch, 1);
}

int main(void)
{
	int nbr = 1;

	while (nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			write (1, "fizzbuzz", 9);
		else if (nbr % 3 == 0)
			write (1, "fizz", 4);
		else if (nbr % 5 == 0)
			write (1, "buzz", 4);
		else
			fizzbuzz(nbr);
		write (1, "\n", 1);
		nbr++;
	}
	return 0;
}
