/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_int_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaysash <lmaysash@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:01:49 by lmaysash          #+#    #+#             */
/*   Updated: 2024/07/14 19:11:33 by lmaysash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*This function converts an array of characters 
 * into an array of integers.
 *
 *It takes the pointer to an array 
 *of characters as parameter. 
 *
 *The function returns a pointer 
 *to an array of integers.
*/
int	*ft_to_int_array(char *tab)
{
	int	i;
	int	j;
	int	*rules;

	rules = (int *)malloc(64);
	i = 0;
	j = 0;
	while (tab[i])
	{
		rules[j] = tab[i] - '0';
		i = i + 2;
		j = j + 1;
	}
	return (rules);
}
