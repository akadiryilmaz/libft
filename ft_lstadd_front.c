/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:07:23 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:07:33 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (!new)
		return ;
	else if (!lst)
	{
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
void yazdir(t_list *konuk)
{
    t_list *kopyalama;
    kopyalama = konuk;
    while (kopyalama)
    {
        printf("%s\n",kopyalama->content);
        kopyalama= kopyalama->next;
    }
    
}

int main()
{
    t_list *birincikerim;
    t_list *sifirinci;

    sifirinci = ft_lstnew("Y");
    birincikerim = ft_lstnew("kerim");
    birincikerim -> next = ft_lstnew("ikincifatih");
    birincikerim ->next ->next = ft_lstnew("ucuncukadir");
    birincikerim->next->next->next=ft_lstnew("dorduncumeryem");
    ft_lstadd_front(&birincikerim,sifirinci);
    yazdir(birincikerim);
}
*/
