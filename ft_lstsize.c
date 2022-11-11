/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:10:40 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:10:49 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
void yazdir(t_list *cekilcek)
{
    t_list *kopyalama;
    kopyalama = cekilcek;
    while (kopyalama)
    {
        printf("%s\n",kopyalama->content);
        kopyalama = kopyalama->next;
    }
    
}

int main()
{
    t_list *fatih;
    t_list *kerim;

    kerim = ft_lstnew("benimki");
    fatih=ft_lstnew("fatihinki");
    fatih->next = ft_lstnew("keriminki");
    fatih->next->next=kerim;
    fatih->next->next->next=ft_lstnew("gurkaninki");
    printf("%d\n",ft_lstsize(fatih));
    yazdir(fatih);

}*/
