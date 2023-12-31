/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:39:18 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:39:20 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *ad;
    t_list    *ap;

    ad = NULL;
    while (lst)
    {
        ap = ft_lstnew(f(lst -> content));
        if (!ap)
        {
            ft_lstclear(&ad, del);
            return (NULL);
        }
        ft_lstadd_back(&ad, ap);
        lst = lst -> next;
    }
    return (ad);
}
