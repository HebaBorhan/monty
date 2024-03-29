#include "monty.h"

/**
 * swap - Swap top two elements of stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

temp = (*stack)->next;
(*stack)->next = temp->next;
(*stack)->prev = temp;
temp->next = *stack;
temp->prev = NULL;
*stack = temp;
}
