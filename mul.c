#include "monty.h"

/**
 * mul - multiplies top 2 elements of stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void mul(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n *= (*stack)->n;
temp = (*stack);
(*stack) = (*stack)->next;
if (*stack)
{(*stack)->prev = NULL;
}
free(temp);
}
