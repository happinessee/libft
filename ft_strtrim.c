/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:57:12 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/16 18:32:31 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_set(int c, char const *set)
{
	size_t	idx;

	idx = 0;
	while (set[idx])
	{
		if (c == set[idx])
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*str;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return (ft_strdup(s1));
	start = 0;
	len = ft_strlen(s1);
	end = len - 1;
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (s1[end] && is_set(s1[end], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
