#include "monty.h"

/**
 * sub - subtracts top 2 elements of stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void sub(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n -= (*stack)->n;
temp = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
free(temp);
}
