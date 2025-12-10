/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:58:19 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:37:21 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putheX(unsigned int n)
{
    size_t len;
    int mod;

    len = 0;
    if (n >= 16)
        len += ft_putheX(n / 16);
        
    mod = n % 16;
    if (mod < 10)
        len += ft_putchar(mod + '0');
    else
        len += ft_putchar(mod - 10 + 'A');

    return (len);
}