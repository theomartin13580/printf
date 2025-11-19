/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theom <theom@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:54:39 by theomart          #+#    #+#             */
/*   Updated: 2025/11/19 17:53:59 by theom            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printargs(const char *str, va_list lst, int i, int *length)
{
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(lst, int), length);
	if (str[i + 1] == 's')
		ft_putstr(va_arg(lst, char *), length);
	if (str[i + 1] == '%')
		ft_putchar('%', length);
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr(va_arg(lst, int), length);
	if (str[i + 1] == 'u')
		ft_putunbr(va_arg(lst, unsigned int), length);
	if (str[i + 1] == 'x')
		ft_puthex(va_arg(lst, unsigned int), "0123456789abcdef", length);
	if (str[i + 1] == 'X')
		ft_puthex(va_arg(lst, unsigned int), "0123456789ABCDEF", length);
	if (str[i + 1] == 'p')
		ft_putptr(va_arg(lst, unsigned long long), "0123456789abcdef", length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	args;

	length = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printargs(str, args, i, &length);
			i++;
		}
		else
			ft_putchar(str[i], &length);
		i++;
	}
	va_end(args);
	return (length);
}