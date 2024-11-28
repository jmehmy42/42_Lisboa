/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:55:41 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/22 18:39:02 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str [i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{
	char arr[]="HelloWorld";
	char arr2[]="*&251)_";
	char arr3[]="";
	int result = ft_str_is_alpha(arr);
	printf("for alphabetical characters: %d\n",result);
	printf("for other character : %d\n" ,ft_str_is_alpha(arr2));
	printf("for empty : %d\n", ft_str_is_alpha(arr3));
}*/
