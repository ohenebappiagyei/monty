#include <stdio.h>
#include "monty.h"

/**
 * mul - Multiply the second top element of the stack by the top element.
 * @stack: DOuble pointer to the beginning of the stack.
 * @line_number: The line number of the opcode being executed.
*/
void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n; /* Multiply the top element */
	pop(stack, line_number); /* Remove the top element */
}
