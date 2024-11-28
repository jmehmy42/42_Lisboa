/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:02:53 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/01 12:16:58 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	number;
	int	i;
	int	j;

	i = 0;
	j = 1;
	number = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j = -j;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = ((number * 10) + (str[i] - '0'));
		i++;
	}
	return (number * j);
}
/*int main ()
{
	char str[] ="   ---+--+1234ab567";
	printf ("%d", ft_atoi(str));
}*/
