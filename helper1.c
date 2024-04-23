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

    tmp = *stack_a;
    while(tmp)
    {
        if( tmp->data < tmp->next->data )
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

int get_max(s_liste **stack)
{
    s_liste *head;
    int max;

    head = *stack;
    max = head->data;
    while(head)
    {
        if(max < head->data)
            max = head->data;
        head = head->next;
    }
    return (max);
}
int get_min(s_liste **stack)
{
    s_liste *head;
    int min;

    head = *stack;
    min = head->data;
    while(head)
    {
        if(min > head->data)
            min = head->data;
        head = head->next;
    }
    return (min);
}
void ft_index(s_liste **stack)
{
    s_liste *head;
    int     i;

    i = 0;
    head = *stack;
    while (head)
    {
        head->index = i++;
        head  = head->next;
    }
}

