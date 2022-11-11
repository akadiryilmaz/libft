/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:21:01 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:21:06 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;
	int		check;

	check = 0;
	i = 0;
	j = 0;
	while (i + j < len && haystack[i])
	{
		j = 0;
		check = 0;
		while (needle[j])
		{
			if (*(haystack + i + j) != *(needle + j) && i + j < len)
			{
				check = 1;
			}
			j++;
		}
		j--;
		if (check == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(needle) == 0 || needle == haystack || len < 0)
		return ((char *)haystack);
	if (!ft_strlen(haystack) || ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	return (find(haystack, needle, len));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char *haystack = "alivelikadirkerimfatih";
    const char *needle = "kadir";
    printf("%s\n", ft_strnstr(haystack,needle,22));
}
*/
