/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:38:28 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:38:30 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list    *tmp;

    if (!lst || !del || !*lst)
        return ;
    while (lst && *lst)
    {
        tmp = (*lst)-> next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
}
