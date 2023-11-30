/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:07:03 by ohassani          #+#    #+#             */
/*   Updated: 2023/11/29 21:19:10 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putstr_fd(char *s, int fd);
int	ft_putchar_fd(char d, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_printfx(unsigned long n, char *hexa);
int	ft_printadres(unsigned long n);
int	ft_printf(const char *s, ...);
int	ft_printfu(unsigned int i);

#endif
