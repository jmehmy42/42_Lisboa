/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:05:24 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/21 18:24:03 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/* int main ()
{
	int x=25 , y=5;
	int *ptr1, *ptr2;
	ptr1 = &x;
 	ptr2 = &y;
	ft_ultimate_div_mod(ptr1,ptr2);
	printf ("division : %d\n modulur : %d\n", x,y);
}*/
