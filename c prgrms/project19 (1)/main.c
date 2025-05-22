/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",i);
        sum=sum+i;
        if(i<n)
        printf("+");

            
        
    }
    
    printf("=%d\n",sum);

    return 0;
}