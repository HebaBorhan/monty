#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * read_line - Read line from Monty file
 * @line: Monty bytecode
 * @line_number: Line number in Monty file
 * @stack_head: Pointer to head of stack
 * Return: 0 (line exist), -1 (comment or empty line)
 */

int read_line(char *line, unsigned int line_number, stack_t **stack_head)
{
char *opcode = strtok(line, " \t\n");

if (opcode == NULL || opcode[0] == '#')
{
return (-1);
}

exec_opcode(opcode, line_number, stack_head);
return (0);
}
