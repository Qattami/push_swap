/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:49:08 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:31:43 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include "libft/libft.h"

typedef struct s_liste
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
**char ft_check(char *av);
*s_liste ft_check2(char ** split);
s_liste *liste(int *tab, int len);


#endif