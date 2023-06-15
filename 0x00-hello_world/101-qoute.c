#include <unistd.h>

/**
 * main - printing without printf or puts
 *
 * Return: 1
 */

int main(){
	char *msg = " and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,msg,37);
	return (1);
}
