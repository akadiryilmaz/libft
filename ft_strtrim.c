/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:21:47 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/02/01 16:21:49 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	char	*new;

	s = 0;
	if (!s1)
		return (0);
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	e = ft_strlen(s1) - 1;
	if (e)
	{
		while (s1[e] && ft_strchr(set, s1[e]))
			e--;
	}
	if (s > e + 1)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (e - s + 2));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + s, e - s + 2);
	return (new);
}
/*
int main()
{
    const char *a = "ka";
    const char *b = "dirkadirkab";
    printf("%s",ft_strtrim(b,a));
}*/
