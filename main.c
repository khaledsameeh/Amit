#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
//#include "STDtypes.h"

void edit (int *x);
int main ()
{
    int n;
    printf("enter number :\n");
    scanf("%d",&n);
    printf("before calling edit function : %d\n",n);
    edit(&n);
    printf("After calling edit function : %d\n",n);

}
void edit (int *x)
{
    *(x++);
}







