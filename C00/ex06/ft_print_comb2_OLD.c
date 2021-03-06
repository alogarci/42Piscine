/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:36:43 by alogarci          #+#    #+#             */
/*   Updated: 2020/11/30 10:59:29 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_display(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int n[4];

	n[0] = '0';
	while (n[0] <= '9')
	{
		n[1] = n[0];
		while (n[1] <= '9')
		{
			n[2] = n[1];
			while (n[2] <= '9')
			{
				n[3] = n[2];
				while (n[3] <= '9')
				{
					ft_display(n[0], n[1], n[2], n[3]);
					n[3]++;
				}
				n[3] = '0';
				n[2]++;
			}
			n[2] = '0';
			n[1]++;
		}
		n[1] = '0';
		n[0]++;
	}
	n[0] = '0';
}
