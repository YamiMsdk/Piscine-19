/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:50:01 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/14 15:23:51 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char	*str, char	*to_find)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()

{
char str[] = "yo j mar den adi  marre g egrbdg ";
char to_find[] = "";

ft_strstr(str, to_find);

printf("%s\n", ft_strstr(str, to_find)); 	
printf("%s\n",strstr(str, to_find));

}*/
