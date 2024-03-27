/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:19:43 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/26 10:29:13 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

**char ft_check(char *av)
{
    int i;
    char *join;
    char **split;
    
    i = 1;
     while(av[i])
        {
            join[i] = ft_strjoin(join, av[i]);
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
        return (split);
}
*s_liste ft_check2(char ** split)
{
    int i;
    int *tab;
    
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
    return (head);
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