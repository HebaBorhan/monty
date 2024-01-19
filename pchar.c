#include "monty.h"
#include <stdio.h>
/**
 * pchar - Print the char at the top of the stack,
 * followed by a new line.
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void pchar(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
if (current == NULL)
{
fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
else
{
if (current->n >= 0 && current->n < 128)
{
printf("%c\n", current->n);
}
else
{
fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}
}
}
