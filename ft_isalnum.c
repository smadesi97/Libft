/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:42:29 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/28 16:14:36 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'));
}

int main(void)
{
    for (int i = 0; i < 128; putchar(++i % 8 ? ' ' : '\n'))
        printf("%3d '%c' %c ", i, isprint((char unsigned)i) ? i : '?', isalnum(i) ? 'X' : ' ');  
    putchar('\n');
}
