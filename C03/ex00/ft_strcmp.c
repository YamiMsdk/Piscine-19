/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:57:17 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/13 21:48:32 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char s1[]="boour";
	char s2[]="bor";
	printf("%d\n",ft_strcmp(s1, s2));
	printf("%d\n",strcmp(s1, s2));
}
*/
