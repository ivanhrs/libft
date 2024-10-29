/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-las- <ide-las-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:09:49 by ide-las-          #+#    #+#             */
/*   Updated: 2024/10/08 20:16:32 by ide-las-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		char_c;

	ptr = s;
	char_c = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == char_c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
