/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:14:14 by tuygun            #+#    #+#             */
/*   Updated: 2023/07/26 14:14:15 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	strsayac;

	i = -1;
	strsayac = -1;
	if (!s)
		return (0);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		str = malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (s[start] && ++i <= len)
	{
		str[++strsayac] = (char)s[start];
		start++;
	}
	str[len] = '\0';
	return (str);
}
