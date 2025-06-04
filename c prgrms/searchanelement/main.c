/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100];
    int i,pos,size,value,found;
    printf("enter number of elements:");
    scanf("%d",&size);
    
    printf("enter %d elements\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&value);
    
    found=0;
    for(i=0;i<size;i++){
        if(arr[i]==value)
        {
            found=1;
            break;
        }
    }
   
   if(found==1){
       printf("\n%d is found at position%d",value,i);
   }else{
       printf("%d is not found in the array",value);
   }
    
    return 0;
}