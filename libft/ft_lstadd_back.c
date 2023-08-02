/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:37:59 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:38:01 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *last;

    if (!lst)
        return ;
    if (!*lst)
        *lst = new;
    else
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}
