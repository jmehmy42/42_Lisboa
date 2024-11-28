/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:26:47 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/22 20:04:04 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{
	char str[]="&^%";
	char str1[]="↵";
	char str2[]="";
	int result = ft_str_is_printable(str);
	int result1 = ft_str_is_printable(str1);
	int result2 = ft_str_is_printable(str2);
	printf ("when array has printable character : %d\n", result);
	printf ("when array has non printable character : %d\n", result1);
	printf ("when array is empty : %d\n", result2);
}*/
