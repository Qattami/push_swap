/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:57:46 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:33:54 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_invalid(char *str)
{
    while(*str)
    {
        if(*str > '9' || *str < '0')
            return (0);
        str++;
    }
    return (1);
}
int duplicate(int *tab, int len)
{
    int i = 0;
    int j;    
    while (i < len)
    {
        j = i + 1;
        while (j <= len)
        {
            if (tab[i] == tab[j++])
                return 1;
        }
        i++;
    }
    return 0;
}


int main(int argc , char **argv)
{
    
    char **split;
    int *tab;
    s_liste *head;    
    if(argc > 2)
    {
        split = ft_check(av[1]);
        head = ft_check2(split);
        swap_3(&head);
    }
    return 0;
}


