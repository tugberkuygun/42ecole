/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:39:44 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:39:47 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_lstsize(t_list *lst)
{
    int    i;

    i = 0;
    while (lst)
    {
        lst = lst -> next;
        i++;
    }
    return (i);
}
