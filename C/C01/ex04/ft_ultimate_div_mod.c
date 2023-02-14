/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:50:11 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/08 18:07:37 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int c, d;

// 	c = 10;
// 	d = 15;

// 	ft_ultimate_div_mod(&c, &d);

// 	write(1, &c, 1);
// 	write(1, &d, 1);

// 	return (0);
// }