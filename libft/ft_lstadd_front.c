/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:38:10 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:38:17 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    new -> next = *lst;
    *lst = new;
}
