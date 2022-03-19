/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:37:26 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/19 18:54:15 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			s_len;

	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == 0)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	else if (s_len - start <= len)
		str = (char *)malloc(sizeof(char) * (s_len - start + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
