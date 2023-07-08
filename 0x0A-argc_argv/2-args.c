#include <stdio.h>

/**
 * main - print all args
 *
 * @argc: input
 * @argv: input
 * @Return: 0
 */
int main(int argc, char *argv[])
{
    (void) argc;
    int i = 0;

    while (*argv)
        printf("%s\n", argv[i++]);
    return (0);
}