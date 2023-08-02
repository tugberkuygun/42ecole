/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:44:48 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:44:50 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char    *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    a;
    size_t    sizedst;
    size_t    sizesrc;

    sizedst = ft_strlen(dst);
    sizesrc = ft_strlen(src);
    a = ft_strlen(dst);
    if (dstsize <= sizedst)
        return (dstsize + sizesrc);
    i = 0;
    while (src[i] != '\0' && a < dstsize - 1)
    {
        dst[a] = src[i];
        a++;
        i++;
    }
    dst[a] = '\0';
    return (sizedst + sizesrc);
}
