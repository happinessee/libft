/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:57:12 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/13 23:24:08 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_set(char const *set, char c)
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

char	*make_str(char const *s1, size_t start, size_t end)
{
	char	*str;
	size_t	idx;

	idx = 0;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == 0)
		return (0);
	while (start < end)
	{
		str[idx++] = s1[start++];
	}
	str[idx] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	start;
	size_t	end;

	start = 0;
	len = 0;
	end = 0;
	while (s1[start] && is_set(set, s1[start]))
		start++;
	while (s1[end])
		end++;
	--end;
	while (s1[end] && is_set(set, s1[end]))
		end--;
	return (make_str(s1, start, end));
}
