/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:13:04 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/18 18:03:10 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		idx;
	char	*tmp;

	idx = 0;
	tmp = 0;
	if ((char)c == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (s[idx])
	{
		if (s[idx] == (char)c)
			tmp = (char *)&s[idx];
		idx++;
	}
	return (tmp);
}
