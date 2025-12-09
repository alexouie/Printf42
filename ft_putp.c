/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:27:42 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 16:14:39 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putp_rec(unsigned long ptr)
{
    size_t len = 0;
    int mod;

    if (ptr >= 16)
        len += ft_putp_rec(ptr / 16);

    mod = ptr % 16;
    if (mod < 10)
        len += ft_putchar(mod + '0');
    else
        len += ft_putchar(mod - 10 + 'a');

    return len;
}

size_t ft_putp(unsigned long ptr)
{
    size_t len = 0;

    if (ptr == 0)
        return ft_putstr("(nil)");

    len += ft_putstr("0x");
    len += ft_putp_rec(ptr);

return len;
}

