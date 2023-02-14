/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:35:06 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/13 16:57:21 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ovo_estralado_pimenta_sal_e_feijao(int a, int b, int c)
{
	if (a != b || b != c || c != a)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a != '7')
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ovo_estralado_pimenta_sal_e_feijao(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb ();
// 	return (0);
// }
