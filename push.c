#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * push - insert element onto the stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */

void push(stack_t **stack, unsigned int line_number)
{
char *str;
int num;
stack_t *new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error: malloc failed\n");
free(new_node);
exit(EXIT_FAILURE);
}
str = strtok(NULL, " \t\n");
num = atoi(str);
if (!str)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
free(new_node);
exit(EXIT_FAILURE);
}
new_node->n = num;
new_node->prev = NULL;
new_node->next = *stack;
if (*stack)
{
(*stack)->prev = new_node;
}
*stack = new_node;
}
