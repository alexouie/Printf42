/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:48:58 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:54:18 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putnbr(int n)
{
    size_t len = 0;

    if (n == -2147483648)
        return ft_putstr("-2147483648");

    if (n < 0)
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        len += ft_putnbr(n / 10);
        len += ft_putnbr(n % 10);
    }
    else
        len += ft_putchar(n + '0');

    return (len);
}