/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:03:56 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/14 14:31:43 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	(dest[j] = '\0');
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[100] = "12345";
	char src[] = "67890";

	ft_strcat(dest, src);
	int i = 0;
	while (dest[i])
	{
			printf("%c\n", dest[i]);
		i++;
	}
	printf("%s\n", dest);
	printf("%s\n", strcat(dest, src));

}*/
