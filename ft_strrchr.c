/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:06:36 by edpereir          #+#    #+#             */
/*   Updated: 2024/10/01 16:38:10 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(s);
	if (ch == '\0')
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == ch)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (0);
}
