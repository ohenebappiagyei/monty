#include <stdio.h>
#include "monty.h"

/**
 * mod -Compute the remainder of the division of the second top element
 * 	of the stack by the top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: THe line number of the opcode being executed.
*/
void mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n; /* Compute the remainder */
	pop(stack, line_number);
}
