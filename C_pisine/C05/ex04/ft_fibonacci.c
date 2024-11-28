/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:58:31 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/02 18:04:18 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*#include <stdio.h>
int main()
{
	int a;
	int result;
	printf("Enter any Number ");
	scanf ("%d", &a);
	result = ft_fibonacci(a);
	
	printf("%dth number in fibonacci series is %d\n",a, result);
}*/
