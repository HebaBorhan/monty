#include "monty.h"
#include <stdio.h>
/**
 * pop - Removes top element of the stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}

*stack = current->next;
if (*stack != NULL)
(*stack)->prev = current->prev;
free(current);
}
