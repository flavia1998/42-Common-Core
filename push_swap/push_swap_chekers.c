/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_chekers.c                                :+:      :+:    :+:   */
/* //                                                   +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:07:11 by fvieira-          #+#    #+#             */
/*   Updated: 2023/11/18 18:38:25 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_arguments_repeat(int argc, char **argv)
{
    int i = 1;
    int j;

    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) == 0)
            {
                return 1;
            }
            j++;
        }
        i++;
    }
    return 0; 
}



