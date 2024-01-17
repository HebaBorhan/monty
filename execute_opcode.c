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
    /**
     int opcode_index = get_opcode(opcode);
     */
    
    int i = 0;
    instruction_t inst[] = {
        {"push", push},
        /**
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {"swap", swap},
        {"add", add},
        {"nop", nop},
        {"sub", sub},
        {"div", _div},
        {"mul", mul},
        {"mod", mod},
        {"pchar", pchar},
        {"rotl", rotl},
        {"rotr", rotr},
        */
        {NULL, NULL}};
    
    /**
     if (opcode_index == -1)
    {
        fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
        exit(EXIT_FAILURE);
    }
    */

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
