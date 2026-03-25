#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    
    int numero= rand()%20+1;
    
    printf("o dado foi %d",numero);
    
    if (numero ==20) printf("\n critou!!!!");
    if (numero ==1) printf("\n DESASTRE :(");
    
    return 0;
}
