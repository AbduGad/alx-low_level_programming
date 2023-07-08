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
    int i = 0;

    /*(void) argc;*/
    while (i < argc)
        printf("%s\n", argv[i++]);
    return (0);
}