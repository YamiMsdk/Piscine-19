/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:27:52 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/06 20:57:01 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)

{
    int a;
	   a = 1;
    int b;
	  b = 2;

    printf("Before swapping:\n");
    printf("%d", a);
    printf("%d", b);
    
    ft_swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("%d", a);
    printf("%d", b);

}
*/
