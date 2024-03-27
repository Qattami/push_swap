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

int main(int argc , char **argv)
{
    
    char **split;
    s_liste *head;    
    if(argc > 2)
    {
        split = ft_check(argv[1]);
        head = ft_check2(split);
        swap_3(&head);
    }
    return 0;
}


