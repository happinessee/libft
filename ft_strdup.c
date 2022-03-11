/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:30:57 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/10 13:55:35 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*str;

	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	str = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (str == 0)
		return (0);
	s1_len = 0;
	while (s1[s1_len])
	{
		str[s1_len] = s1[s1_len];
		s1_len++;
	}
	str[s1_len] = 0;
	return (str);
}
