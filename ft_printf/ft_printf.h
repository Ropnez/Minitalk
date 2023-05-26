/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 05:41:30 by buryilma          #+#    #+#             */
/*   Updated: 2023/05/26 05:42:20 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

int		ft_putstr(char *str);
int		ft_printf(const char *sign, ...);
int		ft_putchar(char c);
int		ft_putpointer(void *ptr);
int		ft_putnbr(int number);
int		ft_putunint(unsigned int number);
int		ft_convert(size_t num, char *set);

#endif
