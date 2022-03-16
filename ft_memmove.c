/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:01:26 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/16 12:06:09 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long			cnt;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	if (src == dst || len == 0)
		return (dst);
	if (str1 - str2 > 0)
	{
		cnt = -1;
		while (++cnt < (long)len)
			str2[cnt] = str1[cnt];
	}
	else
	{
		cnt = len;
		while (--cnt >= 0)
			str2[cnt] = str1[cnt];
	}
	return (dst);
}