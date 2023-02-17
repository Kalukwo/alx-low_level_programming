#include <stdio.h>
/**
 *  * main - a  program that prints the size of various types on the computer it is compiled and run on
 *   * return: 0 (success)
 *    */
int main(void)
{
	        char a;
		int b;
		long int c;
		long d;
		float e;
printf("Size of a char: %i byte(s)\n",sizeof(a));
printf("Size of a int: %i byte(s)\n",sizeof(b));
printf("Size of a long int: %i byte(s)\n",sizeof(c));
printf("Size of a long long int: %i byte(s)\n",sizeof(d));
printf("Size of a float: %i byte(s)\n",sizeof(e));
return (0);
}
						                
