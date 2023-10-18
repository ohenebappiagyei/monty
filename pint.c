#include <stdio.h>
#include "monty.h"
/**
 * pint - used to implement pint opcode
 * @stack: the stack to be worked on
 * @line_number: the line
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
