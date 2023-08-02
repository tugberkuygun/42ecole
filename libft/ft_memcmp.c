/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:40:28 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:40:31 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t            i;
    unsigned char    *buffer1;
    unsigned char    *buffer2;

    buffer1 = (unsigned char *)s1;
    buffer2 = (unsigned char *)s2;
    i = 0;
    if (n == 0)
        return (0);
    while ((buffer1[i] == buffer2[i]) && i < n - 1)
        i++;
    return (buffer1[i] - buffer2[i]);
}
