#include "substring.h"


/**
 * stringMatch - Match word as a substring of string
 * @str: String
 * @word: Array of words
 * Return: if word array is a substring of str 1, O otherwise.
*/
int stringMatch(char const *str, char const *word)
{
	int i;

	for (i = 0; *(word + i) != '\0'; i++)
	{
		if (*(str + i) != *(word + i))
			return (0);
	}
	return (1);
}

/**
 * itisNot - Check if 'ch' is not in array 'arr'
 * @arr: An array of integers
 * @len: Length of 'arr' array
 * @ch: Value to check
 * Return: if value is not found so return 1, else 0
*/
int itisNot(int *arr, int len, int ch)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (arr[i] == ch)
			return (0);
	}
	return (1);
}

/**
 * matchCheck - Find if a substring match happens at a single location.
 * @s: A string
 * @wordsarr: An array of words
 * @numwords: Number of elements in parameters 'words'
 * @wordlen: Length of each word
 * Return: If a full match of a substring does of 'wordsarr' exists so 1,
 * otherwise 0.
*/
int matchCheck(char const *s, char const **wordsarr, int numwords, int wordlen)
{
	int *done;
	int donelen = 0;
	int found = 0;
	int match = 1;
	int j, k, l;
	int isint;

	done = malloc(sizeof(int) * numwords);

	for (l = 0; numwords > l; l++)
		done[l] = -1;

	for (j = 0; j < numwords; j++)
	{
		found = 0;
		for (k = 0; k < numwords; k++)
		{
			isint = itisNot(done, donelen, k);

			if (isint && stringMatch((s + (j * wordlen)), wordsarr[k]))
			{
				done[donelen] = k;
				donelen++;
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			match = 0;
			break;
		}
	}
	free(done);
	return (match);
}

/**
 * find_substring - function that finds all the possible substrings
 * containing a list of words, within a given string.
 * @s: it's the string to scan
 * @words: it's the array of words all substrings must be a concatenation
 * arrangement of
 * @nb_words: it's the number of elements in the array words
 * @n: hold the address at which to store the number of elements in the
 * returned array.
 * Return:  an allocated array, storing each index in s, at which a substring
 * was found. If no solution is found, NULL can be returned
 */
int *find_substring(char const *s, char const **words, int nb_words, int *n)
{
	int *result;
	int strlen = 0;
	int wordlen = 0;
	int i;

	*n = 0;
	if (s == NULL || words == NULL || *words == NULL || nb_words == 0)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		strlen++;
	for (i = 0; words[0][i] != '\0'; i++)
		wordlen++;

	result = malloc(sizeof(int) * strlen);
	if (result == NULL)
		return (NULL);

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (matchCheck(s + i, words, nb_words, wordlen))
		{
			result[*n] = i;
			*n = *n + 1;
		}
	}

	if (*n == 0)
	{
		free(result);
		return (NULL);
	}

	return (result);
}
