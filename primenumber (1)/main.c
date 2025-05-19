/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,num,isprime;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<=1){
        isprime=0;
    }else{
    for(i=2;i<=num/2;i++)
    {
       
            
           if( num%i==0){
            isprime=0;
           
        }
            
        
    }
    }
    if(isprime)
        
    
        printf("%d is prime number.\n",num);
        
        else
    
        printf("%d is not a prime number.\n",num);
    
    
    

    return 0;
}
