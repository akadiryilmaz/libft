/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:02:34 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:04:28 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int	a;

	a = 128;
	printf("%d \n", ft_isascii(a));
	return (0);
}
*/
