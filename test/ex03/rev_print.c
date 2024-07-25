/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 21:06:43 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 21:29:22 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++; 
	}
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
			i--;
	}
	write (1, "\n", 1);
		return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_print(argv[1]);
	return (0);
}
