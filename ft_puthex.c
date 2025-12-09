/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:40:58 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:37:22 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_puthex(unsigned int n)
{
    int mod;
    size_t len;
    len = 0;

    if (n >= 16)
        len += ft_puthex(n / 16);
        
    mod = n % 16;
    if (mod < 10)
        len += ft_putchar(mod + '0');
    else
        len += ft_putchar(mod - 10 + 'a');
        
    return (len);
}