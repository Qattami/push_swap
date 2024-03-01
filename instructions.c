/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:50:54 by iqattami          #+#    #+#             */
/*   Updated: 2024/02/29 16:05:10 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(s_liste **stack)
{
	s_liste	*head;
	s_liste	*next_head;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	next_head = head->next;
	if (!head && !next_head)
		return ;
	tmp_val = head->data;
	tmp_index = head->index;
	head->data = next_head->data;
	head->index = next_head->index;
	next_head->data = tmp_val;
	next_head->index = tmp_index;
	return (0);
}

int	sa(s_liste **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(s_liste **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}
int	ss(s_liste **stacka, s_liste **stackb)
{
	if ((ft_lstsize(*stacka) < 2) || (ft_lstsize(*stackb) < 2))
		return (-1);
	swap(stacka);
	swap(stackb);
	ft_putstr_fd("ss", 1);
	return (0);
}
// push an element from stack to another one

int	push(s_liste **stackS, s_liste **stackD)
{
	s_liste	*tmp;
	s_liste	*headS;
	s_liste	*headD;

	if (ft_lstsize(stackS) == 0)
		return (-1);
	headS = *stackS;
	headD = *stackD;
	tmp = headS;
	headS = headS->next;
	*stackS = headS;
	if (!headD)
	{
		headD = tmp;
		headD->next = NULL;
		*stackD = headD;
	}
	else
	{
		tmp->next = headD;
		*stackD = tmp;
	}
	return (0);
}
int	pa(s_liste **stackA, s_liste **stackB)
{
	if (push(stackA, stackB) == -1)
		return (-1);
	ft_putstr_fd("pa", 1);
	return (0);
}
int	pb(s_liste **stackA, s_liste **stackB)
{
	if (push(stackB, stackA) == -1)
		return (-1);
	ft_putstr_fd("pb", 1);
	return (0);
}
// rotate

int	rotate(s_liste **stack)
{
	s_liste	*new_head;
	s_liste	*last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	new_head = *stack;
	last = ft_lstlast(new_head);
	*stack = new_head->next;
	new_head->index = NULL;
	last->next = new_head;
	return (0);
}
int	ra(s_liste **stackA)
{
	if (rotate(stackA) == -1)
		return (-1);
	ft_putstr_fd("ra", 1);
	return (0);
}
int	rb(s_liste **stackB)
{
	if (rotate(stackB) == -1)
		return (-1);
	ft_putstr_fd("rb", 1);
	return (0);
}
int	rr(s_liste **stackA, s_liste **stackB)
{
	if (ft_lstsize(*stackA) < 2 || ft_lstsize(*stackB) < 2)
		return (-1);
	rotate(stackA);
	rotate(stackB);
	ft_putstr_fd("rr", 1);
	return (0);
}
// reverse rotate

int	r_rotate(s_liste **stack)
{
	s_liste	*head;
	s_liste	*last;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	last = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	last->next = *stack;
	*stack = last;
	return (0);
}
int	rra(s_liste **stackA)
{
	if (r_rotate(stackA) == -1)
		return (-1);
	ft_putstr_fd("rra", 1);
	return (0);
}
int	rrb(s_liste **stackB)
{
	if (r_rotate(stackB) == -1)
		return (-1);
	ft_putstr_fd("rrb", 1);
	return (0);
}
int	rrr(s_liste **stackA, s_liste **stackB)
{
	if (ft_lstsize(*stackA) < 2 || ft_lstsize(stackA) < 2)
		return (-1);
	r_rotate(stackA);
	r_rotate(stackB);
	ft_putstr_fd("rrr", 1);
	return (0);
}