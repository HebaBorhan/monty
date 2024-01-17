#include "monty.h"
#include <stddef.h>
#include <sys/types.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
    FILE *my_file;
    char *line_buff = NULL;
    size_t len = 0;
    ssize_t read;
    unsigned int line_number = 0;
    stack_t *stack_head = NULL;

    if (argc != 2)
    {
        dprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    my_file = fopen(argv[1], "r");
    if (!my_file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (getline(&line_buff, &len, my_file) != -1)
    {
        line_number++;
        read_line(line_buff, line_number, &stack_head);
    }

    fclose(my_file);
    return (EXIT_SUCCESS);
}
