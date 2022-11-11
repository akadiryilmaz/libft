/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:08:44 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:08:56 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
/*
void del(void *kalimba)
{
    size_t m = ft_strlen((const char *)kalimba);
    ft_bzero(kalimba, m);
}

int main()
{
    t_list *kalimbakerim;
    t_list *kalimbakadir;
    t_list *kalimbafatih;
    t_list *takipci;
    void *asd;

    kalimbakerim = ft_lstnew("bakir");
    kalimbafatih= ft_lstnew("bakiriki");
    kalimbakadir=ft_lstnew("bakiruc");
    
    takipci = kalimbakerim;
    asd = kalimbakerim->content;

    kalimbakerim -> next = kalimbafatih;

    kalimbakerim -> next -> next = kalimbakadir;
    //kalimbafatih -> next = kalimbakadir;

    ft_lstdelone(kalimbakerim,del);
    printf("%s\n",takipci->content);
}*/
