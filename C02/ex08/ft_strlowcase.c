/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowecase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoussad <ymoussad@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:20:55 by ymoussad          #+#    #+#             */
/*   Updated: 2024/07/10 22:57:52 by ymoussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;
	int	a;

	a = 32;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + a;
			i++;
		}
	}
	return (str);
}

/*   int	main()
{

   char str[] = "DOUHFWO";

   ft_strlowcase(str);

   printf("%s\n", str );

   return (0);
}*/
