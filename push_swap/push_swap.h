/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:05:53 by flavia            #+#    #+#             */
/*   Updated: 2024/02/19 16:55:05 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include <stdio.h>
#	include <unistd.h>
#include "libft.h"
#include "ft_printf.h"

typedef struct stack
{
    int number;
    struct stack *next;
    //struct stack *prev;
} stack_t;

typedef struct stacks
{
    struct stack *stack_a;
    struct stack *stack_b;
} stacks_t;

int check_arguments_repeat(int argc, char **argv);
stack_t *create_node(int number);
void push_start(stack_t **head, int number);
void push_end(stack_t *head, int number);
void print_list(stack_t *head);
stack_t *pop(stack_t **head);
void swap_first_two (stack_t **head);
int count_nodes(stack_t *head);
void sa(stacks_t *stacks);
void sb(stacks_t *stacks);
void ss(stacks_t *stacks);
void pa(stacks_t *stacks);
void pb(stacks_t *stacks);
void ra(stacks_t *stacks);
void rb (stacks_t *stacks);
void rr(stacks_t *stacks);
void rra(stacks_t *stack);
void rrb(stacks_t *stack);
void rrr(stacks_t *stack);
void sort_stack(stacks_t *stacks);
#endif