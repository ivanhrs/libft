/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-las- <ide-las-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:06:49 by ide-las-          #+#    #+#             */
/*   Updated: 2024/10/08 20:18:20 by ide-las-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*mmr_d;
	const unsigned char	*mmr_s;

	if (dest == NULL && src == NULL)
		return (NULL);
	mmr_d = (unsigned char *)dest;
	mmr_s = (const unsigned char *)src;
	while (n > 0)
	{
		*mmr_d = *mmr_s;
		mmr_d++;
		mmr_s++;
		n--;
	}
	return (dest);
}
