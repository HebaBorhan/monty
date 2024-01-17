#include "monty.h"
#include <stdio.h>
/**
 * pall - Print all values on stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void)line_number;
if (current == NULL)
return;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
