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
while (current)
{
if (current->n <= 0 || current->n > 127)
{
fprintf(stderr, "No string to print");
break;
}
printf("%c", current->n);
current = current->next;
}
printf("\n");
}
