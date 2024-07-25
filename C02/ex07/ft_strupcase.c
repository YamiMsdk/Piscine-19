/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:52:39 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/10 22:56:22 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>i*/

char	*ft_strupcase(char *str)
{
	int	i;
	int	a;

	a = 32;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - a;
		}
		i++;
	}
	return (str);
}
/*
   int	main()

   {

   char str[] = "qwerty";

   ft_strupcase(str);
   printf("%s\n", str );

   return (0);
   }
*/
