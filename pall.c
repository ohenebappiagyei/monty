#include <stdio.h>
#include "monty.h"

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
