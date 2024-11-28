/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:05:29 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/22 20:38:24 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*int main ()
{
	char arr[] = "HELLO WORLD";

	ft_strlowcase (arr);
	
	printf ("convert into lowercase : ");

	int	i;
	
	i = 0;
	while (arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i++;
	}
}*/
