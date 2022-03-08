#include <stdio.h>
#include <stdlib.h>

int main()
{
    //segmento malloc
    
    char *a;
    for(int i=0;i<1000;i++){
        a = (char *) malloc(i);
        printf("%a", a);
    }
}