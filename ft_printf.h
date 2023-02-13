/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:32:09 by afindo            #+#    #+#             */
/*   Updated: 2023/01/25 10:32:09 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int		zero;
	int		left;
	int		hash;
	int		sign;
	int		space;
	int		width;
	int		precision;
	int		length_h;
	int		length_hh;
	int		length_l;
	int		length_ll;
	char	type;
}	t_flags;

void	ft_putunbr_base(unsigned long nbr, char *base);
int		ft_countunbr_base(unsigned long nbr, char *base);
void	add_filling(char char_fill, int size, int *len);
int		count_numbers(const char *str);
int		count_digits_unsig(unsigned int n);
int		count_digits_sig(int n, int include_sign);
int		fill_size_sing_int(t_flags *flags, int number);
int		parse_flags(const char *format, t_flags *flags);
int		parse_width(const char *format, va_list args, t_flags *flags);
int		parse_precision(const char *format, va_list args, t_flags *flags);
int		parse_length(const char *format, t_flags *flags);
int		parse_type(const char *format, t_flags *flags);
void	process_flags(int *len, va_list args, t_flags *flags);
void	process_char(int *len, va_list args, t_flags *flags);
void	process_string(int *len, va_list args, t_flags *flags);
void	process_pointer(int *len, va_list args, t_flags *flags);
void	process_signed_decimal(int *len, va_list args, t_flags *flags);
void	process_signed_decimal_2(int *len, int number, t_flags *flags, int s);
void	process_unsigned_decimal(int *len, va_list args, t_flags *flags);
void	process_unsigned_hex_low(int *len, va_list args, t_flags *flags);
void	process_unsigned_hex_up(int *len, va_list args, t_flags *flags);
void	process_percentage(int *len, t_flags *flags);
int		ft_printf(const char *format, ...);

#endif
