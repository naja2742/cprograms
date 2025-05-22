/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,arr[]={2,4,6,8},max=0;
    for(i=0;i<4;i++){
    
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("largest element is:%d",max);

    return 0;
}
