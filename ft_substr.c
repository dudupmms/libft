/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:52:17 by edpereir          #+#    #+#             */
/*   Updated: 2024/10/07 13:15:46 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (NULL == s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
	{
		return (ft_strdup(""));
	}
	j = i - start;
	if (len > j)
	{
		len = j;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
