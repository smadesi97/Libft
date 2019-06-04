/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:50:42 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/31 10:51:49 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
		size_t i;

		i = 0;
		while (s[i] != '\0')
		{
				i++;
		}
		return (i);
}

int main()
{
	size_t s;
	const char str[] = "Sanelisiwe";
	s = ft_strlen(str);
	printf("%zu\n", s);
	return (0);
}
