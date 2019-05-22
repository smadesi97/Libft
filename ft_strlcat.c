/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:41:03 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/22 12:30:08 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t length;

	length = 0;
	while (dst[length] && length < size)
		length += 1;
	i = length;
	while (src[length - i] && length + 1 < size )
	{
		dst[length] = src[length - i];
		length += 1;
	}
	if (i < size)
		dst[length] = '\0';
	return (i + ft_strlen(src));
}

int	main()
{
	char dst[10] = "hello";
	char src[] = "How are you";

	printf("%d\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
}
