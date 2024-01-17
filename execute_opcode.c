#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * execute_opcode - Execute instruction based on opcode
 * @opcode: instruction opcode
 * @line_number: Line number in Monty file
 * @stack_head: Pointer to head of stack
 */
void execute_opcode(char *opcode, unsigned int line_number, stack_t **stack_head)
{
    int opcode_index = get_opcode(opcode);
    instruction_t *instruction = &inst[opcode_index];

    if (opcode_index == -1)
    {
        fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
        exit(EXIT_FAILURE);
    }

    instruction->f(stack_head, line_number);
}
