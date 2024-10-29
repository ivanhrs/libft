/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-las- <ide-las-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:06:05 by ide-las-          #+#    #+#             */
/*   Updated: 2024/10/08 20:17:34 by ide-las-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	p_str1 = (unsigned char *)dest;
	p_str2 = (unsigned const char *)src;
	if (dest == src)
		return (dest);
	while (n--)
		p_str1[n] = p_str2[n];
	return (dest);
}
