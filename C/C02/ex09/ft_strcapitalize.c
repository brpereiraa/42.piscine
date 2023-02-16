/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:50:14 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/16 05:08:21 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str [i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char c[] = "HELLo dDADAWDd12";
// 	ft_strcapitalize(c);
// 	for(int i=0; c[i]!='\0'; i++)
// 	{
// 		printf("%c", c[i]);
// 	}
// 	printf("\n");

// 	return(0);
// }