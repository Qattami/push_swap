/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:08:25 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/28 13:23:00 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(s_liste **stack_a)
{
    s_liste *tmp;

    tmp = stack_a;
    while(tmp)
    {
        if( tmp->data < tmp->next->data )
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

void get_index(s_liste **stack_a)
{
    s_liste *head;
    int index;

    head = stack_a;
    index = 0;
    while(head)
    {
     
        
    }
    
}

int get_min(s_liste **stack_a)
{
    
}