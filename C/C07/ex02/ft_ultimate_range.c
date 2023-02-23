/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:32:23 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/21 00:41:43 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	if (max == min || min > max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	arr = malloc(len * sizeof(int));
	if (arr == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (i);
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