/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:11:57 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/21 17:56:55 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/* 
int main ()
{
	int a=21, b=5;
	int x,y;
 	int *div, *mod;
	div = &x;
	mod = &y;
	
	ft_div_mod(21,5,div,mod);
	
	printf ("division of a by b: %d\n modulus of a by b is : %d\n", x,y);
}
*/
