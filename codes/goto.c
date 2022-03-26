#include <stdio.h>

int main(){
    int a=0;
    while (a<10)
    {
        printf("a is : %d \n", a);
        if(a==5)
        {
            goto terminate;
        }
        a++;
    }
    terminate:
    printf("The program is terminated");
    
}