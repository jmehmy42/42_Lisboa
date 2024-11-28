/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:25:07 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/02 18:14:26 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

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
int	main ()
{
	int a;
	int result;
	printf("enter any number : ");
	scanf("%d", &a);
	result = ft_find_next_prime(a);
	printf ("%d\n", result);
}*/
