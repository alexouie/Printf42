/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almanier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:56:00 by almanier          #+#    #+#             */
/*   Updated: 2025/12/09 15:36:35 by almanier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int     ft_printf(const char *str, ...);

size_t  ft_putchar(char c);
size_t  ft_putstr(char *s);
size_t  ft_putnbr(int n);
size_t  ft_putnbruns(unsigned int n);
size_t  ft_puthex(unsigned int n);
size_t  ft_putheX(unsigned int n);
size_t  ft_putp(unsigned long ptr);

#endif