/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:57:12 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/10 14:54:11 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
//

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	idx;
	size_t	j;

	idx = 0;
	len = 0;
	while (s1[idx])
	{
		if (is_set(set, s1[idx]))
			len--;
		idx++;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	idx = 0;
	j = 0;
	while (idx < len)
	{
		if (is_set(set, s1[idx]))
		{
			idx++;
			continue;
		}
		str[j++] = s1[idx++];
	}
	str[j] = 0;
	return (str);
}