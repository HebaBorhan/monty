#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * push - insert element onto the stack
 * @stack: Pointer to head of stack
 * @line_number: Line number in Monty file
 */

void push(stack_t **stack, unsigned int line_number)
{
char *str;
long int num;
int i;
stack_t *new_node, *temp;
str = strtok(NULL, " \t\n");
if (str == NULL)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]) && !(i == 0 && str[i] == '-'))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
}
num = (long int)(atoi(str));
new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error: malloc failed\n");
free(new_node);
exit(EXIT_FAILURE);
}
new_node->n = num;
new_node->prev = NULL;
temp = *stack;
if (temp != NULL)
{
while (temp->prev != NULL)
temp = temp->prev;
}
new_node->next = temp;
if (temp)
temp->prev = new_node;
*stack = new_node;
}
