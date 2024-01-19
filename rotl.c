#include "monty.h"
#include <stdio.h>
/**
 * rotl - Rotates the stack to the top
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack, *temp;
(void) line_number;
if (*stack == NULL || (*stack)->next == NULL)
return;
temp = (*stack)->next;
temp->prev = NULL;
while (current->next != NULL)
current = current->next;
current->next = *stack;
(*stack)->prev = current;
(*stack)->next = NULL;
*stack = temp;
}
