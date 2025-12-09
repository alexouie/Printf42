/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:48:23 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:59:07 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putnbruns(unsigned int n)
{
    size_t len;
    len = 0;

    if(n >= 10)
        len += ft_putnbruns(n / 10);
    len += ft_putchar((n % 10 ) + '0');
    
    return (len);
}