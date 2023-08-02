/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:44:26 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:44:29 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, const char *s2)
{
    char    *str;
    size_t    len;

    if (!s1 || !s2)
        return (0);
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    ft_strlcpy(str, s1, ft_strlen(s1) + 1);
    ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
    return (str);
}
