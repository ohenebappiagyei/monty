#include <stdio.h>
#include "monty.h"

/**
 * div_op - Divide the second top element of the stack by  the top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: The line number of the opcode being executed.
*/
void div_op(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}
