/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:57:14 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/02 18:09:10 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb > 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
/*#include <stdio.h>
int main ()
{
	int a;
	int result;
	printf("enter any number : ");
	scanf("%d", &a);
	result = ft_is_prime(a);
	if (result == 0)
	printf ("Number %d is not prime , %d\n", a, result);
	if (result == 1)
	printf ("Number %d is prime , %d\n", a, result);
}*/
