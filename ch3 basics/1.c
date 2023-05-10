#include <stdio.h>

/*
Declare a function that outputs Hello World! n number of times. Call this
from main
*/

void printhello(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello World!\n");
    }    
}

int main(int argc, char* argv[])
{
    //Use a for loop to print out Hello World! five times
    for (int i = 0; i < 5; i++)
    {
        printf("Hello World!\n");
    }
    
    //Use a while loop to print out Hello World! five times
    int j = 0;
    while (j < 5) {
        printf("Hello World!\n");
        j++;
    }

    printhello(5);
    
    
    return 0;
}
