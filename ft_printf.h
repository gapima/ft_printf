/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapima <gapima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:52:28 by glima             #+#    #+#             */
/*   Updated: 2023/12/04 12:31:00 by gapima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
size_t	ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_printf(const char *s, ...);
size_t	ft_itoa_base(long nbr, const char *base);
size_t	ft_strlen(const char *s);
int		ft_print_point(long nbr, const char *base);

#endif