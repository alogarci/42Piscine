/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 10:28:34 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/13 17:26:31 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_errors(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("Error, too few arguments\n");
	}
	else if (argv[1][0] == '-')
	{
		ft_putstr("Error\n");
	}
}
