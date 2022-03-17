/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:13:34 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/17 14:20:15 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (lst == 0 || f == 0)
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
		{
			ft_lstclear(res, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}

/*
void *		lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}

#include <string.h>

int main()
{
	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	t_list *ret;

	l->next = ft_lstnew(strdup("ss"));
	l->next->next = ft_lstnew(strdup("-_-"));
	ret = ft_lstmap(l, lstmap_f, ((void *)0));
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
		return 0;
	return 1;
}
*/
