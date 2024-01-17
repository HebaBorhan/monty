#include <stdio.h>
#include "monty.h"
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
FILE *my_file;
char line_buff[MAX_LINE_LENGTH];
unsigned int line_number = 0;
stack_t **stack_head = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

my_file = fopen(argv[1], "r");
if (!my_file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (fgets(line_buff, sizeof(line_buff), my_file) != NULL)
{
line_number++;
read_line(line_buff, line_number, &stack_head);
}

fclose(my_file);
return (EXIT_SUCCESS);
}
