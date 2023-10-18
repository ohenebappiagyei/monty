#include <stdio.h>
#include "monty.h"

/**
 * swap - Swap the top two elements of the stack.
 * @stack: DOuble pointer to the beginning of the stack.
 * @line_number: The line number of the opcode being executed.
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
