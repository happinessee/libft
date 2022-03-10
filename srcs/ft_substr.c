/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:37:26 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/10 14:26:22 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	size_t	s_size;
	char	*str;

	s_size = 0;
	idx = start;
	while (s[idx + s_size])
		s_size++;
	if (s_size < len)
		str = (char *)malloc(sizeof(char) * (s_size + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	while (s[idx] && idx < len + start)
	{
		*str = s[idx++];
		str++;
	}
	return (&str[0]);
}
