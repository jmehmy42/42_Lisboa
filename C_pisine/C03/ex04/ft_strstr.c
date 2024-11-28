/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:37:00 by jmehmy            #+#    #+#             */
/*   Updated: 2024/09/04 10:57:22 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}
/*int main ()
{
	char str1[]= "this is the way";
	char str2[]= "the";
	printf ("%s\n", ft_strstr(str1, str2));
}*/
