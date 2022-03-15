/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:22:44 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 20:14:55 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			idx;

	idx = 0;
	str = (unsigned char *)s;
	while (idx < n)
	{
		if (str[idx] == (unsigned char)c)
			return (&str[idx]);
		idx++;
	}
	return (0);
}
