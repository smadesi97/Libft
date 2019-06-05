/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:27:08 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/03 15:09:46 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != c)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
