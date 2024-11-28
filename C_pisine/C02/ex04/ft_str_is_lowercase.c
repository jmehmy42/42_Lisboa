/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:06:22 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/22 19:23:15 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{
	char str[]="hello";
	char str1[]="";
	char str2[]="HELLO";
	int result = ft_str_is_lowercase(str);
	printf ("when array has low case: %d\n",result);
	printf ("when array has other character : %d\n", ft_str_is_lowercase(str2));
	printf ("when array is empty : %d\n", ft_str_is_lowercase(str1));
}*/
