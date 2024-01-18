#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * exec_opcode - Execute instruction based on opcode
 * @opcode: instruction opcode
 * @line_number: Line number in Monty file
 * @stack_head: Pointer to head of stack
 * Return: 0 (Success)
 */
int exec_opcode(char *opcode, unsigned int line_number, stack_t **stack_head)
{
int i;
instruction_t inst[] = {{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
{NULL, NULL}};

for (i = 0; inst[i].opcode && opcode; i++)
{
if (strcmp(inst[i].opcode, opcode) == 0)
{
inst[i].f(stack_head, line_number);
return (0);
}
}
if (opcode && inst[i].opcode == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
return (0);
}
