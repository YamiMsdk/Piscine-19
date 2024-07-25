/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:46:58 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 18:03:32 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;
	int	sep_length;	

	i = 0;
	total_length = 0;
	sep_length = ft_strlen(sep);
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total_length += sep_length * (size - 1);
	return (total_length);
}

void	concatenate_strings(char *str_concat, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str_concat[pos++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				str_concat[pos++] = sep[j++];
			}
		}
		i++;
	}
	str_concat[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_concat;
	int		total_length;

	if (size == 0)
	{
		str_concat = malloc(1);
		*str_concat = '\0';
		return (str_concat);
	}
	total_length = calculate_total_length(size, strs, sep);
	str_concat = malloc((total_length + 1) * sizeof(char));
	if (!str_concat)
		return (NULL);
	concatenate_strings(str_concat, size, strs, sep);
	return (str_concat);
}
/*
   int	main(void)
   {
   int	size = 5;
   char	*strs[] = {"Sal", "Bonjo", "He", "Goied", "Hi"};
   char	*sep = ", ";	printf("%s\n", ft_strjoin(size, strs, sep));	return 0;
   }
   */
