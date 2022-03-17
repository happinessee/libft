/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:13:34 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/17 13:24:59 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	res = ft_lstnew(f(lst->content));
	if (res == 0)
		return (NULL);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (tmp->next == 0)
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
