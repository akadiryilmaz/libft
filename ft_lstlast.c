/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:09:28 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:09:42 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != (void *)0)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
    t_list *ordek;
    t_list *bak;
    ordek = ft_lstnew("kerim");
    ordek->next= ft_lstnew("pipi");
    ordek->next->next=ft_lstnew("sunnet");
    bak = ft_lstlast(ordek);
    printf("%s\n",bak->content);
}*/
