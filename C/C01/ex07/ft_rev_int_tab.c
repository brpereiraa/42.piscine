/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:03:05 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/08 17:22:19 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		s = tab[i];
		tab[i] = tab[j];
		tab[j] = s;
		i++;
		j--;
	}
}

// int main(void)
// {

//     int c[] = {1,2,3,4,5};
//     ft_rev_int_tab(c,5);
//     printf("%d", c[0]);
//     return (0);

// }