/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:49:08 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/27 10:10:58 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include "libft/libft.h"

typedef struct t_list
{
    int data;
    int index;
    struct s_liste *next;
} s_liste;


int	    swap(s_liste **stack);
int	    sa(s_liste **stack);
int	    sb(s_liste **stack);
int	    ss(s_liste **stacka, s_liste **stackb);
int	    push(s_liste **stackS, s_liste **stackD);
int	    pa(s_liste **stackA, s_liste **stackB);
int	    pb(s_liste **stackA, s_liste **stackB);
int	    rotate(s_liste **stack);
int	    ra(s_liste **stackA);
int	    rb(s_liste **stackB);
int	    rr(s_liste **stackA, s_liste **stackB);
int	    r_rotate(s_liste **stack);
int	    rra(s_liste **stackA);
int	    rrb(s_liste **stackB);
int	    rrr(s_liste **stackA, s_liste **stackB);
int     max_Value(s_liste **stack);
int     min_Value(s_liste **stack);
// void    index(s_liste **stack);
void swap_3(s_liste **stack);
char **ft_check(char *argv);
s_liste *ft_check2(char **split);
s_liste *liste(int *tab, int len);
int check_invalid(char *str);
int duplicate(int *tab, int len);


#endif