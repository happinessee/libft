/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:24:50 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 20:38:58 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && idx < n)
	{
		if (s1[idx] != s2[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx++;
	}
	if (idx == n)
		return (0);
	else
		return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
