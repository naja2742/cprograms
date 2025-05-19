/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    long  factorial=1;
    printf("enter a value:");
    scanf("%d",&n);
    
    printf("%d!=",n);
    
    
    
    
    
    for(i=n;i>=1;i--)
    {
        printf("%d",i);
        if(i>1){
            printf("*");
    
        }
        factorial= factorial*i;
        
    }
    printf("=%ld\n",factorial);
    
    

    return 0;
}