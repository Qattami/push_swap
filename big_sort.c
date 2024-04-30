

#include "push_swap.h"
int split_len(char **split)
{
    int i;

    i = 0;
    while(split[i])
        i++;
    return (i);
}

int processing(s_liste **stackA, char *join)
{
    char    **split;
    int     *tab;
    int     i;
    int     s;
    
    s = 0;
    split = ft_split(join, ' ');
    i = split_len(split);
    tab = (int *)malloc(sizeof(int) * i);   
    while (s < i)
    {
        tab[s] = ft_atoi(split[s]);
        s++;
    }
    if(check_double(tab, i) == 1)
        (ft_putstr_fd("error", 1), exit(1));
	fill_stack(stackA, tab, i);
	tab = sort_tab(tab, i);
	indexing(stackA, tab, i);
    if (check_sort(stackA) == 1)
        return (1);
    return(0);
}

void sorting(s_liste **stackA, s_liste **stackB)
{
    if (ft_lstsize(*stackA) == 2)
        sort_2(stackA);
    else if (ft_lstsize(*stackA) == 3)
        sort_3(stackA);
    else if (ft_lstsize(*stackA) == 4)
        sort_4(stackA, stackB);
    else if (ft_lstsize(*stackA) == 5)
        sort_5(stackA, stackB);
    else if (ft_lstsize(*stackA) > 5)
    {
        if (ft_lstsize(*stackA) < 250)
            Push_to_b(stackA, stackB, 15);
        else
            Push_to_b(stackA, stackB, 40);
    }
}