#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a;
    for(int i=0;i<1000;i++){
        a = (char *) malloc(i);
        printf("%a", a);
    }
   free(str);

    return 0;
}
