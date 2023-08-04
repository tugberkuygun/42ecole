/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:00:02 by tuygun            #+#    #+#             */
/*   Updated: 2023/07/26 14:00:04 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	f_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

char	*f_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	if (!s1)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (f_strlen((char *)s1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*f_strjoin(char *str, char *str2)
{
	char	*ret;
	int		sayac;

	sayac = 0;
	ret = (char *)malloc(sizeof(char) * (f_strlen(str) + f_strlen(str2) + 1));
	if (!ret)
		return (0);
	while (str && *str)
		ret[sayac++] = *str++;
	while (str2 && *str2)
		ret[sayac++] = *str2++;
	ret[sayac] = '\0';
	return (ret);
}

char	*f_substr(char *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*start_ptr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	start_ptr = (char *)s + start;
	i = 0;
	while (i < len && *start_ptr)
	{
		ret[i] = *start_ptr;
		start_ptr++;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*f_strchr(const char *s, int c)
{
	while (s && *s)
		if (*s++ == (char)c)
			return ((char *)s);
	return (NULL);
}
