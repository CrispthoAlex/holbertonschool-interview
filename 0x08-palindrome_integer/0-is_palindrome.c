#include "palindrome.h"

/**
 * is_palindrome - function to check  if a unsigned integer is a palindrome
 *
 * @n: it's the number to be checked
 *
 * Return:  1 if n is a palindrome, and 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long int reverse, reminder;
	unsigned long int cp_n  = n;

	reminder = reverse = 0;

	while (n != 0)
	{
		reminder = n % 10;
		reverse = reverse * 10 + reminder;
		n = n / 10;
		/* printf("Reminder = %lu - Reverse = %lu - number = %lu\n",*/
		/*       reminder, reverse, n);*/
	}
	if (reverse == cp_n)
		return (1);
	return (0);
}
