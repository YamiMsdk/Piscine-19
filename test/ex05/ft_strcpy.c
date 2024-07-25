/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 22:32:01 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 22:45:52 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;	
	}
	s1[i] = '\0';
	return (s1);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "j en ai marre";
	char dest [] = "dsvshv ewfh oaa";
	printf("%s", strcpy(dest, src));
}
