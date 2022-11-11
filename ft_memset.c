/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:14:17 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:14:20 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len)
	{
		*ptr = c;
		len--;
		ptr++;
	}
	return (b);
}
/*
#include <stdio.h>

int main()
{
    char    *s = "meryem altundal";
    int c = 'a';
    void    *b;

    b = ft_memset(s, c, 6);
    printf("%s\n", b);
    return 0;
}
*/
