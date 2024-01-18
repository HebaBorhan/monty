#include "monty.h"
#include <stdio.h>
/**
 * pint - Print all values on stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void pint(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
if (current == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
else
{
printf("%d\n", current->n);
}
}