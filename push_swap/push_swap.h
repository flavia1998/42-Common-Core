/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:05:53 by flavia            #+#    #+#             */
/*   Updated: 2024/02/09 21:44:46 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include <stdio.h>
#	include <unistd.h>
#include "libft.h"
#include "ft_printf.h"

typedef struct node
{
    int number;
    struct node *next;
    struct node *prev;
} node_t;

int check_arguments_repeat(int argc, char **argv);
node_t *create_node(int number);
void push_start(node_t **head, int number);
void push_end(node_t *head, int number);
void print_list(node_t *head);
node_t *pop(node_t **head);
void swap_first_two (node_t **head);

#endif