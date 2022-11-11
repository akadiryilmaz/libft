/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:01:12 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:01:21 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;	

	str = (void *) malloc(size * count);
	if (!str)
		return (0);
	ft_memset(str, 0, (size * count));
	return (str);
}
/*
#include <stdio.h>
int main()
{
    size_t a = 5;
    size_t b = 4;

    printf("%s \n", ft_calloc(a, b));
    return 0;
}*/
