/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theom <theom@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:43:23 by theom             #+#    #+#             */
/*   Updated: 2025/11/18 15:59:59 by theom            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *s)
{
    int i;

    if (!s)
        return ;
    i = 0;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
}

void    ft_putnbr(int n)
{
    unsigned int    num;

    num = n;
    if (n < 0)
    {
        ft_putchar('-');
        num = -n;
    }
    if (num >= 10)
        ft_putnbr(num / 10);
    ft_putchar((num % 10) + '0');
}

void    ft_putunbr(unsigned int n)
{
    if (n >= 10)
        ft_putunbr(n / 10);
    ft_putchar((n % 10) + '0');
}

void ft_puthex(int n, const char *base)
{
    unsigned int    num;
    num = n;
    if (n < 0)
    {
        ft_putchar('-');
        num = -n; 
    }
    if (num >= 16)
        ft_puthex(num / 16, base);
    ft_putchar(base[num % 16]);
}



