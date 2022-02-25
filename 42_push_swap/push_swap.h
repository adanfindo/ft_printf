/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:26:55 by afindo            #+#    #+#             */
/*   Updated: 2022/02/25 11:28:07 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define NO_MED 2147483648
# define STRCMP ft_strcmp

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <limits.h>

typedef struct		s_pswap
{
	int				n;
	struct s_pswap	*nxt;
	struct s_pswap	*prv;
}					t_pswap;

typedef struct		s_stack
{
	t_pswap			*head;
	t_pswap			*end;
	t_pswap			**p;
	int				top;
	int				ac;
}					t_stack;

void				push(t_pswap **from, t_pswap **to, t_pswap **to_end);
void				swap(t_pswap **head);
void				rotate(t_pswap **head, t_pswap **end);
void				rev_rotate(t_pswap **head, t_pswap **end);
void				build_stack(t_stack *a, t_stack *b, char **av, int ac);
void				print_stacks(t_pswap *a, t_pswap *b, char *line);
long				special_median_a(t_stack *a);
int					deal_higher_a(t_stack *a, char *cd, int m, int c[2]);
void				split_round_median_a(t_stack *a, t_stack *b,
int med, char *cmnds);

void				sort_a(t_stack *a, int count, char *tmp);
long				special_median_b(t_stack *b);
int					deal_lower_b(t_stack *b,
char *cd, int m, int c[2]);

void				split_round_median_b
(t_stack *a, t_stack *b, int med, char *cmnds);

void				sort_b(t_stack *b, int count, char *tmp);
int					split_a(t_stack *a, t_stack *b, t_list **cmnd);
void				b_to_a(t_stack *a, t_stack *b, t_list **cmnd);
int					sorted(t_stack *a);
t_list				*solver(t_stack *a, t_stack *b);
int					get_count(t_stack *s);
int					get_true_median(t_stack *a);
void				error_exit(void);

void				rev_rotater(char *line, t_stack *a, t_stack *b);
void				swapper(char *line, t_stack *a, t_stack *b);
void				rotater(char *line, t_stack *a, t_stack *b);

#endif
