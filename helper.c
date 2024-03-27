/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:33:47 by iqattami          #+#    #+#             */
/*   Updated: 2024/03/27 10:00:56 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

#include "push_swap.h"
#include "./libft/libft.h" // Include the necessary header file for your libft functions

char **ft_check(char *argv)
{
    int i = 1;
    char *join = ft_strdup(""); // Initialize join properly
    char **split;

    while (argv[i])
    {
        join = ft_strjoin(join, &argv[i]); // Pass the address of argv[i]
        i++;
    }

    split = ft_split(join, ' ');
    free(join);

    if (!split)
    {
        ft_putstr_fd("error", 2);
        return NULL;
    }

    i = 0;
    while (split[i])
    {
        if (!check_invalid(split[i]))
        {
            ft_putstr_fd("error", 2);
            free(split);
            return NULL;
        }
        i++;
    }

    return split;
}

s_liste *ft_check2(char **split)
{
    int i = 0;
    int *tab = malloc(sizeof(int) * (ft_strlen(*split) + 1)); // Allocate memory for tab

    if (!tab)
        return NULL;

    s_liste *head = NULL;

    while (split[i])
    {
        tab[i] = ft_atoi(split[i]);
        i++;
    }

    free(split);

    if (duplicate(tab, i))
    {
        ft_putstr_fd("error", 2);
        return NULL;
    }

    head = liste(tab, i);
    free(tab); // Free the allocated memory for tab
    return head;
}

s_liste *liste(int *tab, int len)
{
    int i;
    s_liste *head;
    s_liste *new;

    head = NULL; // Initialize head to NULL
    i = 0;
    while (len > i)
    {
        new = ft_lstnew(&tab[i]); // Remove the s_liste * declaration from here
        if (new == NULL)
            return NULL;

        ft_lstadd_back(&head, new);
        i++;
    }
    return head;
}
