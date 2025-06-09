/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,arr[100],size1,size2,totalsize,key;
    printf("enter number of elements in first array:");
    scanf("%d",&size1);
    printf("enter elements of first array:");
    for(i=0;i<size1;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter number of elements in second array:");
    scanf("%d",&size2);
     printf("enter elements of second array:");
   for(i = 0; i < size2; i++) {
    scanf("%d", &arr[size1 + i]);  
}
    
    
        totalsize=size1+size2;
       
        for(i=1;i<totalsize;i++){
            key=arr[i];
            j=i-1;
            while(j>=0&&arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        printf("\nsorted array:");
        for(i=0;i<totalsize;i++){
            printf("%d ",arr[i]);
        
    }

    return 0;
}