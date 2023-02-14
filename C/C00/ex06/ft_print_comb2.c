/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:20:13 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/13 16:57:14 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recurs_char(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b % 10) + 48);
	ft_putchar((b % 10) + 48);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				recurs_char (a, b);
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2 ();
// 	return (0);
// }
