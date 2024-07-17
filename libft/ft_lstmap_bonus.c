/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:53:24 by mmendia-          #+#    #+#             */
/*   Updated: 2024/06/17 12:33:52 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = ft_lstnew(f(lst->content));
		else
			new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void *uppercase(void *content)
{
	if (content == NULL) 
		return (NULL);
    size_t i = 0;
    char *str = (char *)content;
    char *result = ft_strdup(str); 
    while (content)
    	{
     		result[i] = ft_toupper(result[i]);
			i++;    
   		}
    return result;
}

void free_content(void *content)
{
	free(content);
}
int main ()
{
	t_list *lst = ft_lstnew("hello");
	ft_lstadd_back(&lst, ft_lstnew("world"));
	t_list *new_lst = ft_lstmap(lst, uppercase, free_content);
 	return (0);
}*/
