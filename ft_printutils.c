/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theom <theom@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:43:23 by theom             #+#    #+#             */
/*   Updated: 2025/11/19 18:13:27 by theom            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char c, int *length)
{
    write(1, &c, 1);
    (*length) ++;
}
void    ft_putstr(char *s, int *length)
{
    int i;

    if (!s)
    {
        ft_putstr("(null)", length);
        return ;
    }
    i = 0;
    while (s[i])
    {
        ft_putchar(s[i], length);
        i++;
    }
}

void    ft_putnbr(int n, int *length)
{
    unsigned int    num;

    num = n;
    if (n < 0)
    {
        ft_putchar('-', length);
        num = -n;
    }
    if (num >= 10)
        ft_putnbr(num / 10, length);
    ft_putchar((num % 10) + '0', length);
}

void    ft_putunbr(unsigned int n, int *length)
{
    if (n >= 10)
        ft_putunbr(n / 10, length);
    ft_putchar((n % 10) + '0', length);
}

void ft_puthex(unsigned int n, const char *base, int *length)
{
    if (n >= 16)
        ft_puthex(n / 16, base, length);
    ft_putchar(base[n % 16], length);
}



