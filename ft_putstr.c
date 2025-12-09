/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:49:23 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:37:12 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


size_t ft_putstr(char *str)
{
	size_t len;
	len = 0;

	if (str == NULL)
		return ft_putstr("(null)");

	while (str[len])
		len += ft_putchar(str[len]);

	
	return (len);
}