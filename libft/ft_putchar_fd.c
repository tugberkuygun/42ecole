/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:41:42 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:41:44 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*int main()
{
    int i = open("test.txt", 1);
    printf("%d", i);
    ft_putchar_fd('a',i);
    int c = open("test.txt", 1);
    printf("%d", c);
}*/
