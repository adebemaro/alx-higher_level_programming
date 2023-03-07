
Tolulope05
/
alx-higher_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-higher_level_programming/0x00-python-hello_world/10-check_cycle.c
@Tolulope05
Tolulope05 Python Hello World Success and executable
 1 contributor
Executable File  26 lines (22 sloc)  428 Bytes
#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
