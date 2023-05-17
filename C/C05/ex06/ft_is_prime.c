/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:04:52 by brpereir          #+#    #+#             */
/*   Updated: 2023/02/19 18:12:14 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

// int main(int argc, char const **argv)
// {
// 	printf("%i", ft_is_prime(137));
// 	return 0;
// }
