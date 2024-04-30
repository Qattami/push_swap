/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 08:57:46 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/27 09:34:28 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
s_liste *ft_check(s_liste *head, char *str1, char *str2)
{
    char *join;
    char **split;
    int i;

    i = 0;
    join = ft_strjoin(str1, str2);
    split = ft_split(join, ' ');
    free(join);
    while(split[i])
    {  
        if(check_digits(split[i]) == 0 )
            {
                write(1, "error", 1);
                exit(1);
            }
        i++;
    }
}
int main(int ac, char **av)
{
    s_liste *head;
    if (ac == 0)
        exit(1);
        i++;
        

    
    while(split[i])
    {
        ft_lstadd_front(&head, ft_lstnew(ft_atoi(split[i])));
        i++; 
    }
    sort_3(&head);
    system("leaks push_swap");
    while(ac > 0)
    {
        head = ft_check(av[i-1], av[i]);
    }

    
    return 0;
}
