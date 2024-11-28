/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:57:49 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/24 09:27:56 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*int main ()
{
	char source[] = "Hello World";
	char destination[50];
	unsigned int length = ft_strlcpy(destination,source,50);

	printf("destination array : %s\n",destination);
	printf("length of the source array: %u\n",length);
}*/
