/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:03:31 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/02 18:02:14 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int main ()
{
	int x, y,result;
	printf ("Enter two Number ");
	scanf ("%d %d", &x, &y);
	result = ft_recursive_power(x,y);
	printf ("power of %d is %d equal to %d\n",x,y, result );
	
}*/
