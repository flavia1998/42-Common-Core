#include "push_swap.h"

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from B to A.
int ft_rotate_type_ba(stacks_t *stacks)
{
	ft_printf("ft_rotate_type_ba\n");
	int i;
	stack_t *tmp;

	tmp = stacks->stack_b;
	i = ft_case_rrarrb_a(stacks, stacks->stack_b->number);
		ft_printf("seg2\n");
	while (tmp)
	{
		if (i > ft_case_rarb_a(stacks, tmp->number))
			i = ft_case_rarb_a(stacks, tmp->number);
		if (i > ft_case_rrarrb_a(stacks, tmp->number))
			i = ft_case_rrarrb_a(stacks, tmp->number);
		if (i > ft_case_rarrb_a(stacks, tmp->number))
			i = ft_case_rarrb_a(stacks, tmp->number);
		if (i > ft_case_rrarb_a(stacks, tmp->number))
			i = ft_case_rrarb_a(stacks, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from A to B.
int ft_rotate_type_ab(stacks_t *stacks)
{
	ft_printf("ft_rotate_type_ab\n");
	int i;
	stack_t *tmp;

	tmp = stacks->stack_a;
	i = ft_case_rrarrb(stacks, stacks->stack_a->number);
	while (tmp)
	{
		if (i > ft_case_rarb(stacks, tmp->number))
			i = ft_case_rarb(stacks, tmp->number);
		if (i > ft_case_rrarrb(stacks, tmp->number))
			i = ft_case_rrarrb(stacks, tmp->number);
		if (i > ft_case_rarrb(stacks, tmp->number))
			i = ft_case_rarrb(stacks, tmp->number);
		if (i > ft_case_rrarb(stacks, tmp->number))
			i = ft_case_rrarb(stacks, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int ft_case_rarb_a(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rarb_a\n");
	int i;

	i = ft_find_place_a(stacks, c);
	if (i < ft_find_index(stacks->stack_b, c))
		i = ft_find_index(stacks->stack_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int ft_case_rrarrb_a(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rrarrb_a\n");
	int i;

	i = 0;
	if (ft_find_place_a(stacks, c))
		i = count_nodes(stacks->stack_a) - ft_find_place_a(stacks, c);
	if ((i < (count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c))) && ft_find_index(stacks->stack_b, c))
		i = count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
int ft_case_rarrb_a(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rarrb_a\n");
	int i;

	i = 0;
	if (ft_find_index(stacks->stack_b, c))
		i = count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c);
	i = ft_find_place_a(stacks, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int ft_case_rrarb_a(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rrarb_a\n");
	int i;

	i = 0;
	if (ft_find_place_a(stacks, c))
		i = count_nodes(stacks->stack_a) - ft_find_place_a(stacks, c);
	i = ft_find_index(stacks->stack_b, c) + i;
	return (i);
}

// This function rotates both stack_a and stack_b
// in the same direction as required amount.
int ft_apply_rarb(stacks_t *stacks, int c, char s)
{
	ft_printf("ft_apply_rarb\n");
	if (s == 'a')
	{
		while (stacks->stack_a->number != c && ft_find_place_b(stacks, c) > 0)
			rr(stacks);
		while (stacks->stack_a->number != c)
			ra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rb(stacks);
		pb(stacks);
	}
	else
	{
		while (stacks->stack_b->number != c && ft_find_place_a(stacks, c) > 0)
			rr(stacks);
		while (stacks->stack_b->number != c)
			rb(stacks);
		while (ft_find_place_a(stacks, c) > 0)
			ra(stacks);
		pa(stacks);
	}
	return (-1);
}

// This function rotate both stack_a and stack_b in the
// reverse direction as required amount.
int ft_apply_rrarrb(stacks_t *stacks, int c, char s)
{
	ft_printf( "ft_apply_rrarrb\n");
	if (s == 'a')
	{
		while (stacks->stack_a->number != c && ft_find_place_b(stacks, c) > 0)
			rrr(stacks);
		while (stacks->stack_a->number != c)
			rra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rrb(stacks);
		pb(stacks);
	}
	else
	{
		while (stacks->stack_b->number != c && ft_find_place_a(stacks, c) > 0)
			rrr(stacks);
		while (stacks->stack_b->number != c)
			rrb(stacks);
		while (ft_find_place_a(stacks, c) > 0)
			rra(stacks);
		pa(stacks);
	}
	return (-1);
}

// This function rotate the stack_a in reverse direction,
// the stack_b in oppsite direction of stack_a as required amount.
int ft_apply_rrarb(stacks_t *stacks, int c, char s)
{
	ft_printf("ft_apply_rrarb\n");
	if (s == 'a')
	{
		while (stacks->stack_a->number != c)
			rra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rb(stacks);
		pb(stacks);
	}
	else
	{
		while (ft_find_place_a(stacks, c) > 0)
			rra(stacks);
		while (stacks->stack_b->number != c)
			rb(stacks);
		pa(stacks);
	}
	return (-1);
}

// This function rotate the stack_b in reverse direction,
// the stack_a in oppsite direction of stack_a as required amount.
int ft_apply_rarrb(stacks_t *stacks, int c, char s)
{
	ft_printf("ft_apply_rarrb\n");

	if (s == 'a')
	{
		while (stacks->stack_a->number != c)
			ra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rrb(stacks);
		pb(stacks);
	}
	else
	{
		while (ft_find_place_a(stacks, c) > 0)
			ra(stacks);
		while (stacks->stack_b->number != c)
			rrb(stacks);
		pa(stacks);
	}
	return (-1);
}

int is_stack_sorted(stacks_t *stacks)
{
	stack_t *aux;
	aux = stacks->stack_a;

	while (aux)
	{
		if (aux->next && aux->number > aux->next->number)
		{
			return 0;
		}
		aux = aux->next;
	}
	return 1;
}

void sort_stack(stacks_t *stacks)
{
	if ((stacks->stack_a->next == NULL))
		return;

	if (is_stack_sorted(stacks) == 1)
	{
		printf("Stack already sorted ignoring...");
		return;
	}

	ft_sort(stacks);
}

// This function returns the last element of the stack.
stack_t *lstlast(stack_t *lst)
{
	ft_printf("lstlast\n");
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// This function finds and returns the smallest number
// in the given stack.
int ft_min(stack_t *a)
{
	int i;

	i = a->number;
	while (a)
	{
		if (a->number < i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

// This function finds and returns the biggest number
// in the given stack.
int ft_max(stack_t *a)
{
	ft_printf("ft_max\n");
	int i;

	i = a->number;
	while (a)
	{
		if (a->number > i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

// This function sort the stack if there are only
// three elements in the stack.
void ft_sort_three(stacks_t *stacks)
{
	ft_printf("ft_sort_three\n");

	if (ft_min(stacks->stack_a) == stacks->stack_a->number)
	{
		rra(stacks);
		sa(stacks);
	}
	else if (ft_max(stacks->stack_a) == stacks->stack_a->number)
	{
		ra(stacks);
		if (!is_stack_sorted(stacks))
			sa(stacks);
	}
	else
	{
		if (ft_find_index(stacks->stack_a, ft_max(stacks->stack_a)) == 1)
			rra(stacks);
		else
			sa(stacks);
	}
}

// This function checks the index of a number
// 	 in the stack.
int ft_find_index(stack_t *a, int number)
{
	ft_printf("ft_find_index\n");
	int i;

	i = 0;
	while (a->number != number)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

// This function finds the correct place of the number in stack_b.
// In other words, it check what index number nbr_push will get
// after it is being pushed to the stack_b.
int ft_find_place_b(stacks_t *stacks, int nbr_push)
{
	ft_printf("ft_find_place_b\n");
	int i;
	stack_t *tmp;
	stack_t *stack_b = stacks->stack_b;

	i = 1;
	if (nbr_push > stack_b->number && nbr_push < lstlast(stack_b)->number)
		i = 0;
	else if (nbr_push > ft_max(stack_b) || nbr_push < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->number < nbr_push || tmp->number > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

// This function finds the correct place of the number in stack_a.
// In other words, it check what index number nbr_push will get
// after it is being pushed to the stack_a.
int ft_find_place_a(stacks_t *stacks, int nbr_push)
{
	ft_printf("ft_find_place_a\n");
	int i;
	stack_t *tmp;
	stack_t *stack_a = stacks->stack_a;

	i = 1;
	if (nbr_push < stack_a->number && nbr_push > lstlast(stack_a)->number)
		i = 0;
	else if (nbr_push > ft_max(stack_a) || nbr_push < ft_min(stack_a))
		i = ft_find_index(stack_a, ft_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->number > nbr_push || tmp->number < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}

// This function calculates how many times
// we should rotate the stacks together.
// Because after a certain amoun of rotate, we will
// proceed only with one stack rotation.
int ft_case_rarb(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rarb\n");
	int i;

	i = ft_find_place_b(stacks, c);
	if (i < ft_find_index(stacks->stack_a, c))
		i = ft_find_index(stacks->stack_a, c);
	return (i);
}

// This function calculates how many times we should rotate the stacks together.
// Because after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is
// calculated by list_size - index_number.
int ft_case_rrarrb(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rrarrb\n");
	int i;

	i = 0;
	if (ft_find_place_b(stacks, c))
		i = count_nodes(stacks->stack_b) - ft_find_place_b(stacks, c);
	if ((i < (count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c))) && ft_find_index(stacks->stack_a, c))
		i = count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c);
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for rra+rb case.
int ft_case_rrarb(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rrarb\n");
	int i;

	i = 0;
	if (ft_find_index(stacks->stack_a, c))
		i = count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c);
	i = ft_find_place_b(stacks, c) + i;
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for ra+rrb case.
int ft_case_rarrb(stacks_t *stacks, int c)
{
	ft_printf("ft_case_rarrb\n");
	int i;

	i = 0;
	if (ft_find_place_b(stacks, c))
		i = count_nodes(stacks->stack_b) - ft_find_place_b(stacks, c);
	i = ft_find_index(stacks->stack_a, c) + i;
	return (i);
}

// This function sort and push stacks until 3 members left behind.
void ft_sort_b_till_3(stacks_t *stacks)
{
	ft_printf("ft_sort_b_till_3");
	int i;
	stack_t *tmp;

	while (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
	{
		tmp = stacks->stack_a;
		i = ft_rotate_type_ab(stacks);
		while (i >= 0)
		{
			if (i == ft_case_rarb(stacks, tmp->number))
				i = ft_apply_rarb(stacks, tmp->number, 'a');
			else if (i == ft_case_rrarrb(stacks, tmp->number))
				i = ft_apply_rrarrb(stacks, tmp->number, 'a');
			else if (i == ft_case_rarrb(stacks, tmp->number))
				i = ft_apply_rarrb(stacks, tmp->number, 'a');
			else if (i == ft_case_rrarb(stacks, tmp->number))
				i = ft_apply_rrarb(stacks, tmp->number, 'a');
			else
				tmp = tmp->next;
		}
	}
}

// This function one by one pushes all the elements
// in stack_a to the stack_b, until only three elements
// are left in stack_a. While pushing, it makes sure if
// the stack_b is sorted. When three elements are left,
// it calls the ft_sort_three function to sort left over
// elements in stack_a.
void ft_sort_b(stacks_t *stacks)
{
	ft_printf("ft_sort_b\n");
	if (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
		pb(stacks);
	if (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
		pb(stacks);
	if (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
		ft_sort_b_till_3(stacks);
	if (!is_stack_sorted(stacks))
		ft_sort_three(stacks);
}

// This function is pushing back the elements from stack_b
// to stack_a until stack_b is empty.
void ft_sort_a(stacks_t *stacks)
{
	ft_printf("ft_sort_a");
	int i;
	stack_t *tmp;
	tmp = stacks->stack_b;

	while (stacks->stack_b)
	{
		tmp = stacks->stack_b;
		i = ft_rotate_type_ba(stacks);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(stacks, tmp->number))
				i = ft_apply_rarb(stacks, tmp->number, 'b');
			else if (i == ft_case_rarrb_a(stacks, tmp->number))
				i = ft_apply_rarrb(stacks, tmp->number, 'b');
			else if (i == ft_case_rrarrb_a(stacks, tmp->number))
				i = ft_apply_rrarrb(stacks, tmp->number, 'b');
			else if (i == ft_case_rrarb_a(stacks, tmp->number))
				i = ft_apply_rrarb(stacks, tmp->number, 'b');
			else
				tmp = tmp->next;
		}
	}
}

// This function sorts the stack_a if there are more
// than 2 elements in the stack_a.
// And finally it makes final sort in stack_a after
// all values pushed to stack_b, sorted and pushed
// back to stack_a. Because, even the stack_a is
// sorted at the end, the minimum number have to
// at the top of the stack_a. So, it simply brings
// the smallest number of the stack_a to the top.
void ft_sort(stacks_t *stacks)
{
	ft_printf("ft_sort\n");
	int i;

	stacks->stack_b = NULL;
	if (count_nodes(stacks->stack_a) == 2)
		sa(stacks);
	else
	{
		ft_sort_b(stacks);
		ft_sort_a(stacks);
		i = ft_find_index(stacks->stack_a, ft_min(stacks->stack_a));
		if (i < count_nodes(stacks->stack_a) - i)
		{
			while ((stacks->stack_a)->number != ft_min(stacks->stack_a))
				ra(stacks);
		}
		else
		{
			while ((stacks->stack_a)->number != ft_min(stacks->stack_a))
				rra(stacks);
		}
	}
}
