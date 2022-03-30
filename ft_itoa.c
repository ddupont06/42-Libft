/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupont <ddupont@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:07:06 by ddupont           #+#    #+#             */
/*   Updated: 2022/03/22 16:29:31 by ddupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	absolute_value(long int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;

	len = get_len(n);
	result = malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n)
	{
		len--;
		result[len] = absolute_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
