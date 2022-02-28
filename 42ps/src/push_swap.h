/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:32:21 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:15:39 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

typedef struct	s_elem
{
	int				nb;
	struct s_elem	*next;
}				t_elem;

typedef	struct	s_stack
{
	t_elem		*first;
	int			count;
	int			max;
	int			max1;
	int			max2;
	int			min;
}				t_stack;

typedef	struct	s_insert
{
	int		rb;
	int		ra;
	int		rra;
	int		rrb;
	int		nb_op;
	char	op;
	int		nb;
}				t_insert;

typedef	struct	s_mall
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		**argv;
	int			is_mall;
}				t_mall;

/*
*********************************STACK*****************************************
*/

t_stack			*fill_stack(int argc, char **argv);
t_stack			*init_empty_stack(void);
int				check_double(t_stack *stack);
void			print_stack(t_stack *stack);
int				is_sorted(t_stack *stack_a, t_stack *stack_b);

/*
gestione elementi
*/

t_elem			*new_elem(int nb);
int				add_elem(t_stack *stack, int nb);
int				remove_elem(t_stack *stack);

/*
controllo arg
*/

int				check_digit(int argc, char **argv);
int				is_integer(char *str);
int				check_arg(int argc, char **argv);

/*
operazioni
*/

void			swap(t_stack *stack);
int				push(t_stack *stack_a, t_stack *stack_b);
void			rotate(t_stack *stack);
void			reverse_rotate(t_stack *stack);

/*
verifica istruzioni
*/

int				find_swap(char *str, t_stack *stack_a, t_stack *stack_b);
int				find_push(char *str, t_stack *stack_a, t_stack *stack_b);
int				find_rotate(char *str, t_stack *stack_a, t_stack *stack_b);
int				find_reverse_rotate(char *s, t_stack *stacka, t_stack *stack_b);

/*
insertion
*/

int				nb_ra(t_elem *elem, t_stack *stack);
void			rb_case_max(t_insert *insert, t_stack *stack_b);
void			nb_op(t_insert	*insert);
void			nb_rb(t_insert *insert, t_elem *elem, t_stack *stack_b);
t_insert		fill_insert(t_elem *elem, t_stack *stack_a, t_stack *stack_b);

/*
utility
*/

int				ft_min(int a, int b);
int				ft_max(int a, int b);
void			find_max(t_stack *stack_a);
int				count_nb_word(char **argv);
int				rearrange(int *argc, char ***argv, t_mall *mall);

/*
stampa istruzioni
*/

void			do_print_ra(t_stack *stack_a);
void			do_print_rb(t_stack *stack_b);
void			do_print_rra(t_stack *stack_a);
void			do_print_rrb(t_stack *stack_b);
void			do_print_sa(t_stack *stack_a);

/*
operazioni da effettuare
*/

void			insert_min(t_insert insert, t_stack *stack_a, t_stack *stack_b);
void			insert_rr(t_insert insert, t_stack *stack_a, t_stack *stack_b);
void			insert_rrr(t_insert *inser, t_stack *stack_a, t_stack *stack_b);
void			do_op(t_insert insert, t_stack *stack_a, t_stack *stack_b);

/*
sort 2 e 3
*/

void			sort_three(t_stack *stack_a);
void			sort_two(t_stack *stack_a);

/*
free
*/
void			ft_exit(t_mall *mall, int n);
void			free_stack(t_stack *stack);
#endif
