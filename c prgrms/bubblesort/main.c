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
    int i,j,size,temp;
    printf("enter the number of elements:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("\n sorted array:");
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
