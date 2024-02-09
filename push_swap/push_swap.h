/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:05:53 by flavia            #+#    #+#             */
/*   Updated: 2024/02/09 16:13:43 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include <stdio.h>
#	include <unistd.h>
#include "libft.h"
#include "ft_printf.h"

typedef struct
{
    int number;
    struct Node *next;
} Node;

int check_arguments_repeat(int argc, char **argv);
void print_numbers(int argc, char **argv);
Node *creat_node(int number);

#endif