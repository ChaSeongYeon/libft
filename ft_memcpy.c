/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:08:56 by seocha            #+#    #+#             */
/*   Updated: 2022/11/15 11:00:49 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*temp;
	const char		*s;

	i = 0;
	s = src;
	temp = dst;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	return (dst);
}
