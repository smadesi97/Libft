/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:08:05 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/31 10:42:32 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int i;
	int len;
	char*str;

	len = 0;
	while (s1[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}

int main()
{
		char *s;
		char str[] = "hello";
		s = ft_strdup(str);
		printf("%s\n", s);
		return (0);
}
