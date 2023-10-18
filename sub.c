#include <stdio.h>
#include "monty.h"

/**
 * sub - Subtract the top element of the stack from the second top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: The line number of the opcode being executed.
*/
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n; /* Subtract the top element */
	pop(stack, line_number); /* Remove the top element */
}
