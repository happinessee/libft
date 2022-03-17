#include "libft.h"
#include <stdio.h>

void	f(void *content)
{
	printf("%s\n", (char *) content);
}

int	main()
{
	t_list	*head;

	head = ft_lstnew("asdf");
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));
	ft_lstadd_back(&head, ft_lstnew("asdf"));

	ft_lstiter(head, f);
	ft_lstclear(&head, )
}