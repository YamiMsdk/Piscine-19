/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:43:32 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/25 18:43:38 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	array = malloc((size) * sizeof(int));
	if (!array)
	{
		*range = (NULL);
		return (-1);
	}
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}
/*
#include <stdio.h>
int main()
{
	int min = 10;
	int max = 20;
	int *range;
	int size;
	int i = 0;
	
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	return 0;
}*/
