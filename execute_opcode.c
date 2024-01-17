#include "monty.h"

/**
 * execute_opcode - Execute instruction based on opcode
 * @opcode: instruction opcode
 * @line_number: Line number in Monty file
 * @stack_head: Pointer to head of stack
 */
void execute_opcode(opcode, line_number, stack_head)
{
    int opcode_index = get_opcode(opcode);

    if (opcode_index == -1)
    {
        fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
        exit(EXIT_FAILURE);
    }

    instruction_t *instruction = &inst[opcode_index];
    instruction->f(stack_head, line_number);
}
