/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100];
    int i,pos,size,value;
    printf("enter number of elements:");
    scanf("%d",&size);
    
    printf("enter %d elements\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to insert:");
    scanf("%d",&value);
    printf("enter position:");
    scanf("%d",&pos);
    
    
    for(i=size;i>pos;i--){
        arr[i]=arr[i-1];
        
    }
    arr[pos]=value;
    size++;
    printf("array after insertion: ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}