#include <stdio.h>

void __attribute__ ((constructor)) pre_main_print(void);

/**
 * pre_main_print - Prints a sentence before the main function executes.
 */
void pre_main_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
