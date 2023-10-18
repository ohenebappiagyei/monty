#include <stdio.h>
#include "monty.h"

/**
 * pchar - Print the character at the top of the stack.
 * @stack: Doouble pointer to the beginning of the stack.
 * @line_number: The line number of the opcode being executed.
*/
void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;

	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(value);
	putchar('\n');

	pop(stack, line_number); /* Remove the top element */
}
