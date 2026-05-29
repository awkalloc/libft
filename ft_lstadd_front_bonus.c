#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

// int main(void)
// {
// 	t_list *node;
// 
// 	node = malloc(sizeof(t_list));
// 	node->content = "Je suis le dernier\n";
// 	node->next = NULL;
// 
// 	t_list *head;
// 	head = malloc(sizeof(t_list));
// 	head->content = "Je suis la tete\n";
// 
// 	t_list *second;
// 	second = malloc(sizeof(t_list));
// 	second->content = "second\n";
// 
// 	head->next = second;
// 	second->next = node;
// 
// 	t_list 	*new;
// 	new = malloc(sizeof(t_list));
// 	new->content = "New node\n";
// 
// 	t_list *curr;
// 	curr = head;
// 
// 	while (curr)
// 	{
// 		printf("%s", (char*)curr->content);
// 		curr = curr->next;
// 	}
// 
// 	printf("----------------\n");
// 
// 	ft_lstadd_front(&head, new);
// 
// 	curr = head;
// 	while (curr)
// 	{
// 		printf("%s", (char*)curr->content);
// 		curr = curr->next;
// 	}
// }