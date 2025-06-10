/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apechkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:05:46 by apechkov          #+#    #+#             */
/*   Updated: 2024/04/08 13:06:26 by apechkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_chr;
	unsigned char	c_chr;

	s_chr = (unsigned char *)s;
	c_chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_chr[i] == c_chr)
			return (s_chr + i);
		i++;
	}
	return (0);
}
