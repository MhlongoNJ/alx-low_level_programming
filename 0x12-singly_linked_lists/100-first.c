#include <stdio.h>
/*
 * Apply the constructor attribute to startupfun() which is function
 * so that it is executed before main() fuction of course
*/
	void startupfun(void) __attribute__ ((constructor));

/*
 * Apply the destructor attribute to cleanupfun() function of course
 *so that it is executed after main() function
 */

	void cleanupfun(void)__attribute__ ((destructor));
/**
 * startupfun - This functions print a text to the standard output
 *
 */
	void startupfun(void)
	{
		printf("You're beat! and yet, you must allow,");
		printf("\nI bore my house upon my back!\n");
	}