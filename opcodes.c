#include "monty.h"

void get_opcode(char *opcode)
{
    int i = 0;
    instruction_t inst[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {"swap", swap},
        {"add", add},
        {"nop", nop},
        {"sub", sub},
        {"div", div},
        {"mul", mul},
        {"mod", mod},
        {"pchar", pchar},
        {"rotl", rotl},
        {"rotr", rotr},
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
