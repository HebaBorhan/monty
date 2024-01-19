#include "monty.h"
#include <stdio.h>
/**
 * pstr - Print the string starting at the top of the stack,
 * followed by a new line.
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void pstr(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void) line_number;
int i;
for (i = 0; current; i++)
{
if (current->n > 0 && current->n < 128)
{
printf("%c", current->n);
}
else
return;
}
if (current == NULL)
printf("\n");
}