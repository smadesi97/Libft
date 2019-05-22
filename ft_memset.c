/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:28:37 by smadesi           #+#    #+#             */
/*   Updated: 2019/05/22 09:19:39 by smadesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

int	main()
{
  //Basic string to test
	char str[50] = "Testing this sh*t !\0";
	char str2[50] = "Testing this sh*t !\0";
	//replace by
	char replace = '-';
	//on X c
	int nbr = 5;
	
	//Display result
	printf("\x1b[31m-----ORIGINAL MEMSET : %c : %d-----\n\x1b[0m", replace, nbr);
	printf("\x1b[32mOriginal : %s\n\x1b[0m", str);
	printf("\x1b[32mMemset   : %s\n\x1b[0m", (char *)memset(str, replace, nbr));
	printf("\x1b[31m---------------------------------\n\x1b[0m");
	printf("\x1b[31m\n-----TEST FT_MEMSET : %c : %d------\n\x1b[0m", replace, nbr);
	printf("\x1b[32mOriginal : %s\n\x1b[0m", str2);
	printf("\x1b[32mft_memset: %s\n\x1b[0mSIZE OR SEGFAULT ON EACH FNC
	if (ft_strcmp(str, str2))
		printf("\x1b[32mSUCCESS GG\n\x1b[0m");
	else
		printf("\x1b[31mERROR ORIGINAL - TEST DIFFERENT\n\x1b[0m");
	return (0);	
}
