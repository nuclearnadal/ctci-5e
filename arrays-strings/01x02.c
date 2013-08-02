
/* McDowell (2013), Crack the Coding Interview, 5e
 * Question #1.1 (pp. 73)
 * Implement a function void reverse(char *str) in C or C++ which rever-
 * ses a null-terminated string. */

#include <stdio.h>
#include <string.h>

void reverse(char *);

void reverse(char *s) {
	int i = 0, j = strlen(s) - 1;
	while(i < j) {
		*(s + i) ^= *(s + j);
		*(s + j) ^= *(s + i);
		*(s + i) ^= *(s + j);
		++i;
		--j;
	}
}
