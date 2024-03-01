/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:57:46 by iqattami          #+#    #+#             */
/*   Updated: 2024/02/28 18:50:02 by iqattami         ###   ########.fr       */
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
s_liste *liste(int *tab, int len)
{
    int i;
    s_liste *head;
    s_liste *new;
    
    i = 0;
      while (len > i) 
    {  
        s_liste *new = ft_lstnew(&tab[i]);
        if (new == NULL)
            return NULL;
        
        ft_lstadd_back(&head, new);
        i++;
    }
    return(head);
}

int main(int argc , char **argv)
{
    int i;
    char *join;
    char **split;
    int *tab;
    s_liste *head;
    i = 1;
    
    if(argc > 2)
    {
        while(argv[i])
        {
            join[i] = ft_strjoin(join, argv[i]);
            i++;
        }
        if (!(split = ft_split(join, ' ')))
            return (0);
        free(join);
        i = 0;
        while(split[i])
        {
            if(!check_invalid(split[i++]))
            {
                ft_putstr_fd("error", 2);
                free(split);
                return -1 ;
            }
        }
        i = 0;
         while (split[i])
         {
            tab[i] = ft_atoi(split[i]);
            i++;
         }
    
        free(split);
        if(duplicate(tab, i))
        {
            ft_putstr_fd("error", 2);
            return 0;
        }
        head =liste(tab, i);
        swap_3(&head);
    }
    return 0;
}


