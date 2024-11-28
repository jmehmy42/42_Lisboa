/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:40:06 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/22 19:05:32 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	char arr[]="12345";
	char arr1[]="";
	char arr2[]="haind124";
	int result=ft_str_is_numeric(arr);
	printf("when array contains digists: %d\n",result);
	printf("when array has other character : %d\n",ft_str_is_numeric(arr2));
	printf("when array is empty : %d\n",ft_str_is_numeric(arr1));
}*/
