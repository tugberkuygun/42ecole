/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:13:34 by tuygun            #+#    #+#             */
/*   Updated: 2023/07/26 14:13:35 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	alan;

	if (!s1 || !s2)
		return (NULL);
	alan = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * alan + 1);
	i = -1;
	j = -1;
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
