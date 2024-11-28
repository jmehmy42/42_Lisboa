/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:15:58 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/21 18:08:56 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size - i - 1);
		*(tab + size - i - 1) = temp;
		i++;
	}
}
/* void printarr (int *ptr, int size)
	{ 
	 int i =0;
	while (i<size){
	printf ("reverse  arrey : %d\n", *(ptr+i));
	i++;
	}
}

int main ()
{
	int arr[5]={1,2,3,4,5};
	int *ptr = &arr[0];
	
	int i=0;
	while (i<5)
	{
	printf ("original array :%d\n", arr[i]);
	i++;
	}
	printf ("\n");
	ft_rev_int_tab (ptr,5);
	printarr (ptr,5);
}*/
