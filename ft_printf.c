/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:17:10 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:14:00 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t look(const char *str, size_t *i, va_list *arg)
{
    char tmp;
    size_t len;

    len = 0;
    tmp = str[1];

    if (tmp == 'c')
        len += ft_putchar(va_arg(*arg, int));
    else if (tmp == 's')
        len += ft_putstr(va_arg(*arg, char *));
    else if (tmp == 'p')
        len += ft_putp((unsigned long)va_arg(*arg, void *));
    else if (tmp == 'd' || tmp == 'i')
        len += ft_putnbr(va_arg(*arg, int));
    else if (tmp == 'u')
        len += ft_putnbruns(va_arg(*arg, unsigned int));
    else if (tmp == 'x')
        len += ft_puthex(va_arg(*arg, unsigned int));
    else if (tmp == 'X')
        len += ft_putheX(va_arg(*arg, unsigned int));
    else if (tmp == '%')
        len += ft_putchar('%');

    *i += 2;
    return len;
}

int	ft_printf(const char *str, ...)

{
    size_t i;
    va_list arg;
    int len;


    if (str == NULL)
        return 0;
    len = 0;
    va_start(arg, str);
    i = 0;
    while(str[i])
    {
        if(str[i] != '%')
        {
            ft_putchar(str[i]);
            i++;
            len++;
        }
	else
		len += look(str + i, &i, &arg);
    } 
    va_end(arg);
    return (len);
}