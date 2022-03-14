/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:36:45 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/14 09:41:18 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_numlen(int n)
{
	int		len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	num;
	char		*res;
	int			len;

	num = (long long)n;
	len = get_numlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	if (num < 0)
	{
		num *= -1;
		res[0] = '-';
	}
	res[len] = 0;
	while (num)
	{
		res[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (res);
}
