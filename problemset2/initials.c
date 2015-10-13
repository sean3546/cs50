#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main (int argc, char* argv[])
{
    for(int i = 1; i < argc; i++)
       // for (int j = 0, n = strlen(argv[i]); j < n; j++)
            printf("%c\n",  toupper(argv[i][0]));
           
    return 0;
}
