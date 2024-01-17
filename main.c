#include "monty.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
    FILE *my_file;

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
    return (0);
}
