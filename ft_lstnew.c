/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:10:21 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/18 10:20:07 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
/*
int main()
{
    t_list *mehmet;
    mehmet = ft_lstnew("kerim");
    printf("%s\n",mehmet->content);
    
    //mehmet = mehmet->next;
    if(!mehmet->next)
        printf("mehmet burda yok");
    
}*/
