/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:46:59 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/09 14:36:38 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
