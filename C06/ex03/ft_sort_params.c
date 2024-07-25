/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:20:27 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/20 22:39:21 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_params(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = i + '0';
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argv[i]);
	if (argc > 1)
	{
		while (argv[i] == argv[i + 1])
			i++;
		if (argv[i] > argv[i + 1])
			write (1, argv[i], sizeof(argv[i]));
	}
	return (0);
}
