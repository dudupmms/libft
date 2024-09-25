/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:03:25 by edpereir          #+#    #+#             */
/*   Updated: 2024/09/24 18:16:14 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && size != 0)
		{
			i = 0;
			while ((i < len) && i < (size - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = NULL;
		}
	}
	return (len);
}
