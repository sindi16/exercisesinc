#include <stdio.h>

//to get array size or length...
int main(void)
{
    int mynumbers[] = {3, 5, 7, 9};
    printf("%lu\n", sizeof(mynumbers)); //4 el* 4 byte = 16 the size
    return (0);
}

/** the output will be 16. WHY?
* It is because the sizeof operator returns the size of a type in bytes.
* int length = sizeof my variable that is mynumbers/divide with sizeof mynumbers at one index.
*/ 4 * 4byte= 16/1* 4byte = 4 