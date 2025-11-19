/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theom <theom@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:52:38 by theomart          #+#    #+#             */
/*   Updated: 2025/11/19 18:13:46 by theom            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_printargs(const char *str, va_list lst, int i, int *length);
int			ft_printf(const char *str, ...);
void        ft_putchar(char c, int *length);
void        ft_putstr(char *s, int *length);
void        ft_putnbr(int n, int *length);
void    ft_putunbr(unsigned int n, int *length);
void        ft_puthex(unsigned int n, const char *base, int *length);
void    ft_putptr(unsigned long long n, const char *base, int *length);


#endif