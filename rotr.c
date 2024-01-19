#include "monty.h"
#include <stdio.h>
/**
 * rotr - Rotates the stack to the bottom
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */
void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void) line_number;
if (*stack == NULL || (*stack)->next == NULL)
return;
while (current->next != NULL)
current = current->next;
current->next = *stack;
current->prev->next = NULL;
current->prev = NULL;
(*stack)->prev = current;
*stack = current;
}