/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:07:43 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/23 16:07:38 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	s;
	int	n0;
	int	n1;
	int	n2;
	int	i;

	n0 = 0;
	n1 = 1;
	n2 = 0;
	i = 2;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	while (i != index)
	{
		s = n0;
		n0 = n1;
		n1 = n1 + s;
		i++;
	}
	n2 = n1 + n0;
	return (n2);
}

// int main(int argc, char const **argv)
// {
// 	(void)argc;
// 	(void)argv;

// 	int i = ft_fibonacci(13);
// 	printf("%i", i);

// 	return 0;
// }
