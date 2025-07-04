/* gcc -Wall -O2 substr.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Prints a messages and exists with failure code
 * 
 * @param serror Error message
 */
static void panic(const char *serror)
{
	fprintf(stderr, "%s", serror);
	exit(EXIT_FAILURE);
}

/**
 * @brief Allocates memory and panics on allocation error
 * 
 * @param size Size in bytes to allocate
 * @return void* Pointer to allocated memory
 */
static void *xmalloc(size_t size)
{
	void *ptr;
	if (size == 0) {
		panic("Size is 0!\n");
	}
	ptr = malloc(size);
	if (!ptr) {
		panic("No mem left!\n");
	}
	return ptr;
}

/**
 * @brief Retrieves a substring of a string
 * 
 * @param str The string to retrieve a substring from.
 * @param pos The zero-based starting character position of a substring in str.
 * @param len The number of characters in the substring.
 * @return char* A string that is equivalent to the substring of length len that begins at pos in str.
 */
static char *substring(const char *str, size_t pos, size_t len)
{
	int i;
    char *sub;
    
    size_t strLength = strlen(str);

    if(len > strLength){
        panic("Invalid substring length");
    }

    if(len + pos > strLength){
        panic("Substring would acces OOB String position");
    }

    sub = xmalloc(len+1);

    for(i=0; i<len; i++){
        sub[i] = str[pos+i];
    }

    sub[len]='\0';

    return sub;
}

int main(int argc, char **argv)
{
	char *foo = "Nicht\n";
	char *bar = substring(foo, 2, 3);
	printf("%s", bar);
	free(bar);
	return 0;
}

