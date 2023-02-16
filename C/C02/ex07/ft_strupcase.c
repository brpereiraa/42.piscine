/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:26:16 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/16 05:10:17 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char c[] = "hello";
// 	ft_strupcase(c);
// 	printf("%c", c[1]);
// 	return(0);
// }