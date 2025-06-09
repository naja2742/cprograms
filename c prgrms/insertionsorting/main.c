/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100];
    int size,i,j,key;
    printf("enter number of elements:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   for(i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
        printf("\nsorted array:");
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        
    }
    return 0;
}