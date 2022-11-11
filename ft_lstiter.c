/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:09:14 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:09:18 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void f(void *rkerim)
{
    rkerim = (void *)"nebeybisi";
}

int main()
{
    t_list *kadir;

    kadir= ft_lstnew("selam");
    kadir ->next = ft_lstnew("selamiki");

    ft_lstiter(kadir,f);
    printf("%s\n",kadir->content);
}*/
