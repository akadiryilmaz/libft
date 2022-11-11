/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:16:31 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:16:39 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
#include <fcntl.h>

int main(void)
{
    int file = open("eren.txt",O_RDWR);
    ft_putendl_fd("merhaba arkadaşlar",file);
    ft_putendl_fd("ben dj ero",file);
    return (0);
}
*/
