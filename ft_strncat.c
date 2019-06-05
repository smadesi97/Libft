/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:51:03 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/03 17:39:24 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char*)s2;
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (j <= (n - 1) && s[j])
	{
		s1[i + j] = s[j];
		j++;
	}
	s1[i + j] = '\0';
	return ((char*)s1);
}
