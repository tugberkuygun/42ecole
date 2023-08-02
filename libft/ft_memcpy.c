/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:40:43 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:40:47 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t        i;
    const char    *buffer1;
    char        *buffer2;

    i = 0;
    buffer1 = (char *)src;
    buffer2 = dst;
    if (!dst && !src)
        return (0);
    while (i < n)
    {
        buffer2[i] = buffer1[i];
        i++;
    }
    return (dst);
}

