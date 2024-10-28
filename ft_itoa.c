/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:52:12 by edpereir          #+#    #+#             */
/*   Updated: 2024/10/19 02:35:40 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	if (number == 0)
		return (1);
	length = 0;
	if (number < 0)
		length++;
	while (number)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	length;
	unsigned int	number;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (!string)
		return (NULL);
	string[length] = '\0';
	number = n;
	if (n < 0)
	{
		string[0] = '-';
		number = -number;
	}
	if (n == 0)
		string[0] = '0';
	while (number)
	{
		string[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}
