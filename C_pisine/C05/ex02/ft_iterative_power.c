/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:03:31 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/02 18:00:15 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int main ()
{
	int x, y,result;
	printf ("Enter two Number ");
	scanf ("%d %d", &x, &y);
	result = ft_iterative_power(x,y);
	printf ("power of %d is %d equal to %d\n",x,y, result );	
}*/
