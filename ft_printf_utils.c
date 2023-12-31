/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapima <gapima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:52:34 by glima             #+#    #+#             */
/*   Updated: 2023/12/04 12:24:24 by gapima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *s)
{
	size_t	i;

	i = -1;
	if (s == NULL)
		return (ft_putstr("(null)"));
	while (s[++i] != '\0')
		ft_putchar(s[i]);
	return (i);
}

int	ft_putnbr(int n)
{
	char	c;
	size_t	count;

	count = 0;
	if (n == -2147483648)
		count += ft_putstr("-2147483648");
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		c = (n % 10 + '0');
		count += ft_putchar(c);
	}
	else if (n >= 0 && n <= 9)
	{
		c = (n + '0');
		count += ft_putchar(c);
	}
	else
	{
		count += ft_putchar('-');
		count += ft_putnbr(n * -1);
	}
	return (count);
}

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		s++;
		counter++;
	}
	return (counter);
}
