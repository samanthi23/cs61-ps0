#include <stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long n = 0;
    
    while(true) {
        if ( fgetc(stdin) == EOF)
        break;
        ++n
    }
    fprintf("%lu", stdout, n)
	return 0;
}