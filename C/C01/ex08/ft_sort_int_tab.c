/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:15:30 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/06 20:17:23 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	min_index;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[min_index] > tab[j])
				min_index = j;
			j++;
		}
		if (min_index != i)
		{
			temp = tab[i];
			tab[i] = tab[min_index];
			tab[min_index] = temp;
		}
		i++;
	}
}

// int main(void)
// {
// 	int c[] = {313,23,34,45,55};
// 	ft_sort_int_tab(c, 5);
// 	printf("%d,", c[0]);
// 	printf(" %d ,", c[1]);
// 	printf(" %d ,", c[2]);
// 	printf(" %d ,", c[3]);
// 	printf(" %d", c[4]);
// 	return (0);
// }