/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apechkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:55:38 by apechkov          #+#    #+#             */
/*   Updated: 2024/04/19 19:55:40 by apechkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*des;

	if (s == 0 || f == 0)
		return (NULL);
	i = 0;
	des = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (des == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		des[i] = f(i, (char)s[i]);
		i++;
	}
	des[i] = '\0';
	return (des);
}
