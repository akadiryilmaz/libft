/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:06:08 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/18 10:17:37 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mlst;

	mlst = *lst;
	if (!new)
		return ;
	if (*lst == (void *)0)
		*lst = new;
	else
	{
		while (mlst->next != (void *)0)
		{
			mlst = mlst->next;
		}
		mlst->next = new;
	}
}
/*
int main()
{
    t_list *node;
    t_list *bagliliste;

    node = (t_list *)malloc(sizeof(t_list));
    node->content = "kerim";
    bagliliste = ft_lstnew("kerimbagli");
    ft_lstadd_back(&bagliliste,node);
    printf("%s\n",bagliliste->next->content);
}
*/
