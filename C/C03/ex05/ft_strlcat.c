/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:58:24 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/14 18:43:02 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (dlen >= size || size == 0)
		return (size + slen);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

// int main(void)
// {
// 	char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int size = 5;
//     char buffer[size];

// 	strcpy(buffer,first);
// 	r = ft_strlcat(buffer,last,size);

// 	puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         printf("String truncated");
//     else
//         printf("String was fully copied");

//     return(0);
// }