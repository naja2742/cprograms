/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100],num;
    int i,left,right,middle,size;
    printf("enter number of elements:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the number to search:");
    scanf("%d",&num);
    left=0;
    right=size-1;
    while(left<=right){
        middle=(left+right)/2;
    if(arr[middle]==num){
        printf("element found at position %d",middle);
        break;
        
    }else if(arr[middle]>num){
        right=middle-1;
    }else{
        left=middle+1;
    }
    }
    if(left>right){
        printf("given element does not found ");
    }

    return 0;
}