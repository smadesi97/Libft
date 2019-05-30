/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:11:04 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/30 16:26:49 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
				return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int	main()
{
	char lin[5] = "hello";
	ft_memchr(lin, 3);
	printf("%s\n", lin);
	return (0);
}
