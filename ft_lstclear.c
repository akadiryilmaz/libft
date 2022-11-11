/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:07:52 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:08:21 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mlst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		mlst = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = mlst;
	}
	*lst = NULL;
}
/*
void del(void *ezelsilici)
{
    size_t m = ft_strlen((const char *)ezelsilici);
        ft_bzero(ezelsilici,m);
}

int main()
{
    t_list *ezel;
    t_list *kuzey;
    t_list *guney;

    ezel = ft_lstnew("eysan");
    kuzey = ft_lstnew("eysaniki");
    guney =ft_lstnew("eysanuc");

    ezel -> next = kuzey;
    ezel -> next -> next = guney;

    ft_lstclear(&ezel,del);
    printf("%s\n",kuzey->content);
}*/
