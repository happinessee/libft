/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:05:57 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 18:32:28 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		idx;

	idx = 0;
	while (s[idx])
	{
		if (s[idx] == c)
			return ((char *)&s[idx]);
		idx++;
	}
	if (s[idx] == c)
		return ((char *)&s[idx]);
	return (0);
}
