/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuygun <tuygun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:42:11 by tuygun            #+#    #+#             */
/*   Updated: 2022/10/14 14:42:15 by tuygun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = (nb * -1);
    }
    if (nb < 10)
        ft_putchar_fd(nb + 48, fd);
    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}
/*
int main()
{
int fd = open("test.txt", 1);
printf("%d", fd);
int x = 142536;
ft_putnbr_fd(x,fd);
}*/
