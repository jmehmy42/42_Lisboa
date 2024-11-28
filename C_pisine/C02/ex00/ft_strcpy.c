/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:26:38 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/22 12:42:17 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *scr);

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char source[]="Hello World";
	char destination[50];
	printf ("source array is : %s\n", source);
	printf ("destination array is : %s\n", ft_strcpy(destination,source));
	return (0);
}*/
