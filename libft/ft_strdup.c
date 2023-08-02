/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:43:43 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:43:45 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *s;
    size_t    len;
    int        i;

    i = 0;
    len = ft_strlen(str);
    s = (char *)malloc(sizeof(char) * (len + 1));
    if (!s)
        return (0);
    while (str[i] != '\0')
    {
        s[i] = str[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}
