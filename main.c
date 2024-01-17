#include "monty.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
    {
        dprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    return (0);
}
