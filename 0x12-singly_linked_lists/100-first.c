#include<stdio.h>

/**
 * func - Apply the constructor attribute to func()
 */
void func(void) __attribute__ ((constructor));

/**
 * func - execution
 */

void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
