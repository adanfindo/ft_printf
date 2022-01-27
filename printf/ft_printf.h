/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:00 by ajordan-          #+#    #+#             */
/*   Updated: 2022/01/27 09:10:14 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_seek_char(va_list args, const char format);
int	    ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_print_pointer(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexadecimal(unsigned int num, const char format);
int		ft_printpercent(void);

void	ft_putstr(char *str);
void	ft_put_pointer(uintptr_t num);
int		ft_pointer_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
void	ft_put_hexadecimal(unsigned int num, const char format);
int		ft_hexalen(unsigned	int num);

#endif
