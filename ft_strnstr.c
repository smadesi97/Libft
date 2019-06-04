/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:28:30 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/24 12:19:52 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (haystack[i] && (i < len))
	{
		while ((haystack[i + j] == neddle[j]) && neddle[j] && ((i + j) < len))
			j++;
		if (!neddle[j])
			return ((char *) &haystack[i]);
		j = 0;
		i++;
	}
	if (!neddle[0])
		return ((char *)&haystack[i]);
	return (NULL);
}
