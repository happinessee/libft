/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:21:28 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/14 14:14:11 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			cnt;
	unsigned char	*str;

	if (n == 0)
		return ;
	str = (unsigned char *)s;
	cnt = 0;
	while (cnt < n)
	{
		str[cnt] = 0;
		cnt++;
	}
}
