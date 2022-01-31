/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:57:24 by agenoves          #+#    #+#             */
/*   Updated: 2022/01/31 17:01:37 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_list;

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_swap_a(t_list *stack_a);
void	ft_swap_b(t_list *stack_a);
void	ft_swap_ab(t_list *stack_a, t_list *stack_b);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_push_a(t_list *stack_a, t_list *stack_b);
void	ft_push_b(t_list *stack_a, t_list *stack_b);

#endif