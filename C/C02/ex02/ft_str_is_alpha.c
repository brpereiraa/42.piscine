/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:37:34 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/16 05:19:09 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char c[] = "hello";
// 	int d = ft_str_is_alpha(c);
// 	printf("%i", d);
// 	return(0);
// }