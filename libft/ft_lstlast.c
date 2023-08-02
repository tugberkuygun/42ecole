/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:39:07 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:39:08 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst -> next != NULL)
        lst = lst -> next;
    return (lst);
}
