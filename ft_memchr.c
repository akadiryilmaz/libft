/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:12:21 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:12:33 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    const void *s = "Bilgisayar";
    int c = 's';
    size_t n = 10;

    printf("%s", (char *)ft_memchr(s, c, n));
    return 0;
}
*/
