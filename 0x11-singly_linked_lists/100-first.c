#include <stdio.h>
/**
 * before - prints before main is executed
 * Return: 0
*/
void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
