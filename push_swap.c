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

int main()
{
    // char **split;
    s_liste *head;  
    s_liste *head2;
    // if(argc > 2)
    // {
        // split = ft_check(argv[1]);
        // head = ft_check2(split);
        head = ft_lstnew(1);
        ft_lstadd_front(&head, ft_lstnew(3));
        ft_lstadd_front(&head, ft_lstnew(2));
        ft_lstadd_front(&head, ft_lstnew(4));
        // ft_lstadd_back(&head, ft_lstnew(&a[4]));

        sort_4(&head, &head2);
    
    
    // }
    return 0;
}
