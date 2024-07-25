/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaysash <lmaysash@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:54:56 by lmaysash          #+#    #+#             */
/*   Updated: 2024/07/14 19:16:43 by lmaysash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *This function checks for errors and handles them.
 *ERRORS:
 *	+Invalid number of arguments (argc)
 *	+Check for spaces between digits in the string
 *	+Check that digits are between '1' and '4'(included)
 *	+More than 31 characters in the string
 *RETURNS:
 *  1, if there is an error
 *  0, if no errors were found
*/
int	ft_to_be_excluded(char *tab)
{
	int	j;
	int	k;

	j = 0;
	k = 8;
	while (tab[j] && j <= 22)
	{
		if ((tab[j]) - '0' + (tab[j + k]) - '0' > 5
			|| (tab[j]) - '0' + (tab[j + k]) - '0' < 3)
			return (1);
		if (j == 6)
			j = 16;
		else
			j = j + 2;
	}
	return (0);
}

int	ft_check_error(int nb, char *tab)
{
	int	i;

	i = 0;
	if (nb != 2)
		return (1);
	while (i < 32 && tab[i] != '\0')
	{
		if (tab[i + 1] == ' ' && tab[i] >= '1' && tab[i] <= '4')
			i = i + 2;
		else if (tab[i + 1] == '\0')
			i = i + 1;
		else
			return (1);
	}
	if (ft_to_be_excluded(tab))
		return (1);
	if (i != 31)
		return (1);
	return (0);
}
