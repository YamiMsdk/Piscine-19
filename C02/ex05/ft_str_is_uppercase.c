/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:36:37 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/09 14:34:11 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
   int	main()

   {

   char str[] = "ERTDYFG";

   ft_str_is_uppercase(str);
   printf("%d\n", ft_str_is_uppercase(str) );

   return (0);
   }
   */
