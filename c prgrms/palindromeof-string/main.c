/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,length,ispalindrome=1;
    char arr[50],reversed[50];
    printf("enter a string:");
    scanf("%s",arr);
    length=strlen(arr);
    printf("%d\n",length);
    for(i=0;i<length;i++){
        reversed[i]=arr[length-1-i];
    
    }
    reversed[length]='\0';
    printf("%s\n",reversed);
    
    if(strcmp(arr,reversed)==0){
    
        printf("is palindrome");
    }else{
        printf(" is not palindrome");
    }

    return 0;
}