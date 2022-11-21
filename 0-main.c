#include "main.h"
int main(void)
{
	write(1, "STANDARD:\n", 10);
	printf("Tester\n");
	printf("%c\n", 'f');
	
	write(1, "HOME_MADE:\n", 11);	
	_printf("Tester\n");
	_printf("%c\n", 'f');
	return (0);
}
