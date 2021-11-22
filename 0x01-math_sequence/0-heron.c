#include "heron.h"
#include <math.h>

t_cell *heron(double p, double x0)
{
	double x1, error = 0;
	t_cell *new, *head = NULL, *tmp = NULL;

	x1 = x0;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
		return (NULL);
	head = new;
	new->elt = x1;
	new->next = NULL;

	error = (x1 > sqrt(p)) ? x1 - sqrt(p) : sqrt(p) - x1;

	if (error <= 0.0000001)
	{
		return (head);
	}

	x1 = ((p / x0) + x0) / 2;

	head = heron(p, x1);

	tmp = head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (head);
}
