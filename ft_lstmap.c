/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:10:00 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/18 10:42:05 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*newlst;
	t_list	*newel;

	if (!lst)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newel = ft_lstnew(f(lst->content));
		if (!newel)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&newlst, newel);
		lst = lst->next;
	}
	return (newlst);
}
/*
void del(void *content)
{
    free(content);
}

void yazdir(t_list *lst)
{
    t_list *iter;

    iter = lst;
    while(iter)
    {
        printf("%s\n",iter->content);
        iter = iter -> next;
    }
    printf("----------------\n");
}

void *f(void *content)
{
    return ((void*)"cagla");
}

int main()
{
    t_list *asd;
    t_list *mapasd;

    asd = ft_lstnew((void*)"kadirbir");
    asd -> next = ft_lstnew((void*)"kadiriki");
    asd -> next -> next = ft_lstnew((void*)"kadiruc");
    asd -> next -> next -> next = NULL;
    yazdir(asd);
    mapasd = ft_lstmap(asd,&f,&del);
    yazdir(mapasd);
}*/
