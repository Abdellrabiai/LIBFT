/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:49:31 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/22 18:40:12 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = c;
	if (cc == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s && cc != *s)
		s++;
	if (*s == '\0')
		return (0);
	return ((char *)s);
}
