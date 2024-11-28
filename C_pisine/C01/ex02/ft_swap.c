/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:53:34 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/21 17:54:49 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int main ()
{
	int x=9, y=2;
	int *ptr1, *ptr2;
	ptr1 = &x;
	ptr2 = &y;

	printf ("before swap value of x is %d  and value of y is %d\n", x,y);

	ft_swap (ptr1, ptr2);
	
	printf ("after swap value of x id %d value of y is %d\n", x,y);
}
*/
