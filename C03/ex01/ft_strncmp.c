/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:47:26 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/13 22:00:31 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == i)
		return (0);
	while (s1[i] && s2[i] != '\0' && s1[i] == s2[i] && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
char	s1[] = "bo";
char	s2[] = "boa";


unsigned int n;

n = 1;

printf("%d\n", strncmp(s1, s2, n));
printf("%d\n", ft_strncmp(s1, s2, n));
}*/
