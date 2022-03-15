/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:31:11 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 20:35:23 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	idx;

	idx = 0;
	if (s == 0)
		return ;
	while (s[idx])
	{
		f(idx, &s[idx]);
		idx++;
	}
}
