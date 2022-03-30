/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupont <ddupont@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:21:42 by ddupont           #+#    #+#             */
/*   Updated: 2022/03/15 20:40:01 by ddupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{	
		if (*nptr == 45)
			sign *= -1;
		nptr++;
	}
	while (*nptr && (*nptr >= 48 && *nptr <= 57))
	{
		result *= 10;
		result += *nptr++ - 48;
	}
	return (sign * result);
}
