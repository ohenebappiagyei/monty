#include <stdio.h>
#include "monty.h"

/**
 * pstr - Print the string starting at the top of the stack.
 * @stack: DOuble pointer to the beginning of the stack.
 * @line_number: The line number of the opcode being executed.
*/
void pstr(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
