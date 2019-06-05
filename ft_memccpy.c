/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:18:34 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/03 17:41:23 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char *t_s;
	unsigned char		*t_d;
	size_t				i;

	i = 0;
	t_s = src;
	t_d = dst;
	while (i < n)
	{
		if (t_s[i] == c)
			break ;
		t_d[i] = t_s[i];
		i++;
	}
	return (dst);
}
