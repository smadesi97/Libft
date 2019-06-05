/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2019/06/03 12:51:33 by smadesi           #+#    #+#             */
/*   Updated: 2019/06/03 16:17:42 by smadesi          ###   ########.fr       */
=======
/*   Created: 2019/05/24 09:56:20 by smadesi           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/05/31 09:49:02 by smadesi          ###   ########.fr       */
=======
/*   Updated: 2019/05/31 09:41:11 by smadesi          ###   ########.fr       */
>>>>>>> 8bbae14df541411bb02d5c0986c11e9290897894
>>>>>>> 7a532e5fa5dfb99a775c8f84732f247a86757958
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
<<<<<<< HEAD
	int				res;
	int				sign;
	unsigned int	i;
=======
<<<<<<< HEAD
	int				res;
	int				sign;
	unsigned int	i;
=======
	int		res;
	int		sign;
	unsigned int i;
>>>>>>> 8bbae14df541411bb02d5c0986c11e9290897894
>>>>>>> 7a532e5fa5dfb99a775c8f84732f247a86757958

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)(res * sign));
}
