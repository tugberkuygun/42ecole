/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:43:12 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:43:14 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != (char)c && *s != '\0')
        s++;
    if (*s == '\0')
    {
        if (c != '\0')
            return (NULL);
        else
            return ((char *)s);
    }
    return ((char *)s);
}

