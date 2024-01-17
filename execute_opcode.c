#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * exec_opcode - Execute instruction based on opcode
 * @opcode: instruction opcode
 * @line_number: Line number in Monty file
 * @stack_head: Pointer to head of stack
 */
void exec_opcode(char *opcode, unsigned int line_number, stack_t **stack_head)
{
int i = 0;
instruction_t inst[] = {
{"push", push},
{NULL, NULL}
};

for (i = 0; inst[i].opcode != NULL; i++)
{
if (strcmp(inst[i].opcode, opcode) == 0)
{
inst[i].f(stack_head, line_number);
return;
}
}
fprintf(stderr, "Error: Opcode not found in inst array\n");
exit(EXIT_FAILURE);
}
