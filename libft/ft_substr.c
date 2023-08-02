/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:50:49 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:50:53 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    i;

    if (!s)
        return (NULL);
    i = ft_strlen(s) - start;
    if (len < i)
        i = len;
    if (start > ft_strlen(s) - 1)
        return (ft_strdup(""));
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (0);
    ft_strlcpy(str, s + start, i + 1);
    return (str);
}
