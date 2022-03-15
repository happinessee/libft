/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:28:51 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 20:47:43 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	src_len;

	src_len = 0;
	cnt = 0;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	while (src[cnt] && cnt < dstsize - 1)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	dst[cnt] = 0;
	return (src_len);
}
