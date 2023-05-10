#include <stdio.h>
#include <stdlib.h>


#define BUFFER_SIZE 2048

/* Declare a buffer for user input of size 2048 */
static char input[BUFFER_SIZE];

int main(int argc, char *argv[])
{
    /*print version and exit information*/
    puts("Lispy Version 0.0.0.1");
    puts("Press Ctrl+c to exit");

    /* In a never ending loop */
    while (1) {
        /* output our prompt */
        fputs("lispy> ", stdout);

        /* Read a line of user input of maximum size 2048 */
        fgets(input, BUFFER_SIZE, stdin);

        /* Echo input back to user */
        printf("No you're a %s", input);
    }
    
    return 0;
}
