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
void exec_opcode(char *opcode, unsigned int line_number, stack_t **stack_head)
{
int i;
instruction_t inst[] = {{"push", push}, {"pall", pall}, {"pint", pint},
{"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub},
{"div", _div}, {"mul", mul}, {"mod", mod}, {"pchar", pchar}, {"pstr", pstr},
{"rotl", rotl}, {"rotr", rotr}, {NULL, NULL}};
for (i = 0; inst[i].opcode && opcode; i++)
{
if (strcmp(inst[i].opcode, opcode) == 0)
{
inst[i].f(stack_head, line_number);
return;
}
}
if (opcode && inst[i].opcode == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
}
