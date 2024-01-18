#include "monty.h"
#include <stdio.h>
/**
 * pop - Removes the top element of the stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
if (current == NULL)
{
fprintf(stderr, "L%u: can't pop, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
else
{
*stack = (*stack)->next;
if (*stack != NULL)
(*stack)->prev = NULL;
free(current);
}
}