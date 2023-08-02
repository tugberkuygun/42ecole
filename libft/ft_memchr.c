/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:40:04 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:40:10 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t            i;
    unsigned char    *buffer;

    buffer = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (*buffer == (unsigned char)c)
            return (buffer);
        buffer++;
        i++;
    }
    return (NULL);
}
