/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:02:32 by edpereir          #+#    #+#             */
/*   Updated: 2024/09/24 18:18:31 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)

{
	unsigned char		*ptr_dest;
	unsigned const char	*ptr_src;

	if (!n || dest == src)
	{
		return (dest);
	}
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned const char *)src;
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	while (n--)
	{
		ptr_dest[n] = ptr_src[n];
	}
	return (dest);
}
