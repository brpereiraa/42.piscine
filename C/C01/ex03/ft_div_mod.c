/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:50:09 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/08 18:07:14 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int a = 15;
// 	int b = 10;
// 	int div;
// 	int mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Div:%i \nMod:%i \n", div, mod);
// }