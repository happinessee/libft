/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:13:04 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 14:48:11 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		idx;

	idx = 0;
	while (s[idx])
		idx++;
	--idx;
	while (idx < 0)
	{
		if (s[idx] == c)
			return ((char *)&s[idx]);
		idx--;
	}
	return (0);
}
