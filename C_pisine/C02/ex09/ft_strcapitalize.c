/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:05:29 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/26 10:05:38 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 || (str[i - 1] > 31 && str[i - 1] < 48)
			|| (str[i - 1] > 57 && str[i - 1] < 65)
			|| (str[i - 1] > 90 && str[i - 1] < 97)
			|| (str[i - 1] > 122 && str[i - 1] < 127))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*int main ()
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize (arr);
	int	i;
	
	i = 0;
	while (arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i++;
	}
}*/
