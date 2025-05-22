/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    int i,vowels=0,consonants=0,count=0,length;
    char str[50];
    printf("enter a string:");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }else{
            consonants++;
        }
         
    }
         printf("number of vowels:%d\n",count);
         printf("number of consonants:%d",consonants);
     
     
    
    return 0;
}