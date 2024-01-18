#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_opcode(char *opcode)
{
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

    for (i = 0; inst[i].opcode != NULL; i++)
    {
        if (strcmp(inst[i].opcode, opcode) == 0)
        {
            return (i);
        }
    }
    return (-1);
}

/**
 * int get_opcode(char *opcode);
 */

in execute:
/**
     * int opcode_index = get_opcode(opcode);
     */

/**
 * if (opcode_index == -1)
 * {
 * fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
 * exit(EXIT_FAILURE);
 * }
 */

 /**
 * {"pall", pall},
 * {"pint", pint},
 * {"pop", pop},
 * {"swap", swap},
 * {"add", add},
 * {"nop", nop},
 * {"sub", sub},
 * {"div", _div},
 * {"mul", mul},
 * {"mod", mod},
 * {"pchar", pchar},
 * {"rotl", rotl},
 * {"rotr", rotr},
 */

 /**
 * void pall(stack_t **stack, unsigned int line_number);
 * void pint(stack_t **stack, unsigned int line_number);
 * void pop(stack_t **stack, unsigned int line_number);
 * void swap(stack_t **stack, unsigned int line_number);
 * void add(stack_t **stack, unsigned int line_number);
 * void nop(stack_t **stack, unsigned int line_number);
 * void sub(stack_t **stack, unsigned int line_number);
 * void _div(stack_t **stack, unsigned int line_number);
 * void mul(stack_t **stack, unsigned int line_number);
 * void mod(stack_t **stack, unsigned int line_number);
 * void pchar(stack_t **stack, unsigned int line_number);
 * void pstr(stack_t **stack, unsigned int line_number);
 * void rotl(stack_t **stack, unsigned int line_number);
 * void rotr(stack_t **stack, unsigned int line_number);
 */
