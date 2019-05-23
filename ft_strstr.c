/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:00:21 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/23 11:29:02 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *neddle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!neddle[0])
		return ((char *)&haystack[i]);
	while (haystack[i])
	{
		while ((haystack[i + j] == neddle[j]) && neddle[j])
			j++;
		if (!neddle[j])
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
