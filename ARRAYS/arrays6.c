#include <stdio.h>

//calculate the length in array and print it.
int main(void)
{
    int myNumbers[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("%d\n", length);
    return (0);
}
 