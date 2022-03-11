/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:11:48 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/10 14:25:26 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	get_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	idx;
	size_t	idx2;

	idx = 0;
	idx2 = 0;
	str = (char *)malloc(sizeof(char) * (get_strlen(s1) + get_strlen(s2) + 1));
	if (str == 0)
		return (0);
	while (s1[idx])
	{
		str[idx] = s1[idx];
		idx++;
	}
	while (s2[idx2])
	{
		str[idx + idx2] = s2[idx2];
		idx2++;
	}
	str[idx + idx2] = 0;
	return (str);
}
