/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:11:48 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/17 20:29:15 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	const size_t	len = ft_strlen(s1) + ft_strlen(s2) + 1;

	str = (char *)malloc(sizeof(char) * len);
	if (str == 0)
		return (0);
	ft_strlcat(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}
