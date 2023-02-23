/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:44:00 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/21 00:36:05 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (max == min || min > max)
		return (NULL);
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	int *arr;
// 	int i = 0;

// 	arr = ft_range(1, 20);
// 	while (arr[i])
// 	{
// 		printf("%i ", arr[i]);

// 		i++;
// 	}

// 	return (0);
// }