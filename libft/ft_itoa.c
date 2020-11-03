/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:52:10 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/29 14:52:12 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*fresh;
	int		neg;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	size = ft_numsize(n) + neg;
	if (!(fresh = (char *)malloc(size + 1)))
		return (NULL);
	fresh[size] = '\0';
	while (size--)
	{
		fresh[size] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg == 1)
		fresh[0] = '-';
	return (fresh);
}
