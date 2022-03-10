/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:58:50 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/10 12:32:26 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			idx;

	mem = malloc(size * count);
	if (mem == 0)
		return (0);
	idx = 0;
	while (idx < count * size)
	{
		mem[idx] = 0;
		idx++;
	}
	return (mem);
}
