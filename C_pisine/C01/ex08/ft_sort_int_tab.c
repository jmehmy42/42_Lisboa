/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:03:56 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/21 18:02:11 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tem_p;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + (j + 1)))
			{
				tem_p = *(tab + j);
				*(tab + j) = *(tab + (j + 1));
				*(tab + (j + 1)) = tem_p;
			}
			j++;
		}
		i++;
	}
}
/* void sort_array (int *ptr, int size)
	{ 
	 int i =0;
	while (i<size){
	printf ("sort  arrey : %d\n", *(ptr+i));
	i++;
	}
}

int main ()
{
	int arr[5]={1,3,5,4,2};
	int *arr1 = &arr[0]; //pointer contain the address of 1st element of array
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int i=0;
	while (i<size)
	{
	printf ("%d\n", arr[i]);
	i++;
	}
	ft_sort_int_tab(arr1,size);
	sort_array (arr1,size);
	return 0;
}*/
