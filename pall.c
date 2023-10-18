#include <stdio.h>
#include "monty.h"
/**
 * pall - to implement the pall opcode
 * @stack: the stack to be worked on
 */

void pall(stack_t **stack)
{
	stack_t *current;

	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
