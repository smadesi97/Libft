/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:27:08 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/31 11:08:53 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int main()
{
		char *s;
		const char *s1;
		int s2;
		s1 = "siweh";
		s2 = 'w';
		s = ft_strrchr(s1, s2);
		printf("%s\n", s);
		return (0);
}
