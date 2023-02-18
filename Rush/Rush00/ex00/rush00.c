/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:06:06 by sopereir          #+#    #+#             */
/*   Updated: 2023/02/05 18:01:56 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int x, int y, int *i, int *j)
{
	if ((*i == 1 && *j == 1) || (*i == 1 && *j == x)
		|| (*i == y && *j == 1) || (*i == y && *j == x))
	{
		ft_putchar('o');
	}
	else if (*i == 1 || *i == y)
	{
		ft_putchar('-');
	}
	else if (*j == 1 || *j == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
	(*j)++;
	if (*j > x)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x == 0 || y == 0)
	{
		return ;
	}
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			conditions(x, y, &i, &j);
		}
		i++;
	}
}
