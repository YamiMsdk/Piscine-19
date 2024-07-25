/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:28:55 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 18:17:57 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(char*str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dupe;
	int		i;

	length = ft_strlen(src);
	i = 0;
	dupe = malloc((length + 1) * sizeof(char));
	if (!dupe)
		return (NULL);
	while (i <= length)
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
/*
#include <stdio.h>
int main()
{
	char *src = "hallo";
	char *copie = ft_strdup(src);
	printf("%s\n", copie);
	free(copie);
}*/
