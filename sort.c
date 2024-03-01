/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:56:45 by iqattami          #+#    #+#             */
/*   Updated: 2024/02/29 16:31:27 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_Value(s_liste **stack)
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
int min_Value(s_liste **stack)
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
// void index(s_liste **stack)
// {
//     s_liste *head;
//     int     i;

//     i = 0;
//     head = *stack;
//     while (head)
//     {
//         head->index = i++;
//         head  = head->next;
//     }
// }
void swap_3(s_liste **stack)
{
    s_liste *head;
    int max;
    int min;

    max = max_Value(stack);
    min = min_Value(stack);
    head = *stack;
    // index(stack);
                  if(head->data == max)
        {
            ra(stack);
            if(head->data != min)
                rra(stack);
        }
    else if ( head->next->data == max)
    {
        if(head->data != min)
            rra(stack);
        else
            {
                sa(stack);
                ra(stack);
            }
    }
    else if (head->next->next->data == max && head->next->data == min)
        sa(stack);
}
