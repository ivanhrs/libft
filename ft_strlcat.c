/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-las- <ide-las-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:07:29 by ide-las-          #+#    #+#             */
/*   Updated: 2024/10/08 19:39:10 by ide-las-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	len_len;

	i = 0;
	len_len = ft_strlen (dst);
	dest_len = len_len;
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	while ((src[i] != '\0') && dest_len < (size - 1))
	{
		dst[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dst[dest_len] = '\0';
	return (len_len + src_len);
}
