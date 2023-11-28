#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
 * cheek cycle — checks if list is cyclical
 * pointer tO list to check
 * Return: 1 eyeliaai, 0 othetwise
 */
int check cycle (ligtint t *list)
{
	listint_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->list;
		fast = fast->next->next;
		if slow (slow == fast)
			return(1);
	}
	return(0);
}
