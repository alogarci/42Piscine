/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogarci <alogarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:17:11 by alogarci          #+#    #+#             */
/*   Updated: 2020/12/04 13:39:42 by alogarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int n;
	int s;
	int c;

	n = 0;
	s = 0;
	c = 0;
	while ((s1[n] != '\0' && s2[s] != '\0') && (c == 0))
	{
		if (s1[n] == s2[s])
		{
			c += 0;
			n++;
			s++;
		}
		else if (s1[n] < s2[n])
			c -= 1;
		else if (s1[n] > s2[n])
			c += 1;
	}
	return (c);
}

int	main(void)
{
	char arr[] = "Hola";
	char arr2[] = "Hola";
	ft_strcmp(arr, arr2);
}
