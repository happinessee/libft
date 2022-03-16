/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:38:17 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/16 18:52:38 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		needle_len;

	i = 0;
	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
	j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (j == needle_len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
