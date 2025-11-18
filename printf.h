/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theom <theom@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:52:38 by theomart          #+#    #+#             */
/*   Updated: 2025/11/18 16:00:31 by theom            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_printargs(const char *str, va_list lst, int i);
int			ft_printf(const char *str, ...);
void        ft_putchar(char c);
void        ft_putstr(char *s);
void        ft_putnbr(int n);
void    ft_putunbr(unsigned int n);
void        ft_puthex(int n, const char *base);

#endif