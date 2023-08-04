/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tugberkuygun <tuygun@student.42kocaeli.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:20:38 by tugberkuygun      #+#    #+#             */
/*   Updated: 2022/11/07 15:20:47 by tugberkuygun     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	a;

	i = start;
	j = 0;
	a = 0;
	while (a < len && s[a + start] != '\0')
		a++;
	new_str = (char *)malloc(a + 1);
	if (!s || !new_str)
		return (0);
	while (i < ft_strlen(s) && j < len)
	{
		new_str[j++] = s[i++];
	}
	new_str[j] = '\0';
	return (new_str);
}
