
/* McDowell (2013), Crack the Coding Interview, 5e
 * Question #1.2 (pp. 73)
 * Given two strings, write a method to decide if one is a permutation
 * of the other. */

#define ALPHABET_SIZE 256
#include <stdbool.h>
#include <stdio.h>

bool areAnagrams(char *, char *);

bool areAnagrams(char *s, char *t) {
	int c[ALPHABET_SIZE] = {0}, i;
	for(i = 0; *(s + i); ++i)
		++c[(int) *(s + i)];
	for(i = 0; *(t + i); ++i)
		--c[(int) *(t + i)];
	for(i = 0; i < ALPHABET_SIZE; ++i) {
		if(c[i])
			return false;
	}
	return true;
}
