/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:39:31 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:39:33 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list    *ft_lstnew(void *content)
{
    t_list    *ptr;

    ptr = (t_list *)malloc(sizeof(t_list));
    if (!ptr)
        return (0);
    ptr -> next = NULL;
    ptr -> content = content;
    return (ptr);
}

