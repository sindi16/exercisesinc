#include <stdio.h>

//
int main(void)
{
    int myNumbers[] = {3, 50, 75, 100};
    myNumbers[0] = 25;

    printf("%d", myNumbers[0]);

    // Now outputs 25 instead of 3.
   
    return (0);
}