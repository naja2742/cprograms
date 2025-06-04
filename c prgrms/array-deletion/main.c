/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100];
    int i,size,value,pos;
    printf("enter number of elements:");
    scanf("%d",&size);
    printf(" enter %d elements:",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to delete:");
    scanf("%d",&value);
    printf("enter position:");
    scanf("%d",&pos);
    for(i=size;i<pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    size--;
    printf("array after deletion:");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
