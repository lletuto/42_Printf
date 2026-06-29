/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-tuto <lle-tuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:39:59 by lle-tuto          #+#    #+#             */
/*   Updated: 2024/12/03 23:11:51 by lle-tuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c, int count);
int	ft_putstr(char *s, int count);
int	ft_putnbr_un_int(unsigned int nb, int count);
int	ft_putnbr(int nb, int count);
int	ft_putnbr_hex(unsigned int nbr, int count, char letter);
int	ptr_start(void *ptr, int count);
int	ft_printf(const char *s, ...);

#endif
