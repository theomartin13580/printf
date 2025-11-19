/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theom <theom@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:23:20 by theom             #+#    #+#             */
/*   Updated: 2025/11/19 18:03:24 by theom            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putptr_unsigned(unsigned long long n, const char *base, int *length)
{
    if (n >= 16)
        ft_putptr_unsigned(n / 16, base, length);
    ft_putchar(base[n % 16], length);
}

void    ft_putptr(unsigned long long n, const char *base, int *length)
{
    if (n == 0)
    {
        ft_putstr("(nil)", length);
        return ;
    }
    ft_putstr("0x", length);
    ft_putptr_unsigned(n, base, length);
}
