/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 5

char stack[size],value;
int top=-1,i;

void push(char value){
    if(top==size-1){
        printf("\nstack is full");
    }else{
        top++;
        stack[top]=value;
        printf("insertion successful:%c\n inserted at position%d\n",value,top);
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty");
    }else{
        printf("deleted:%c\n",stack[top]);
        top--;
    }
}
void display(){
    if(top==-1){
        printf("\n stack is empty");
        
    }else{
        for(i=0;i<=top;i++){
            printf("%c",stack[i]);
        }
    }
}
int main()
{
    char value;
    for(i=0;i<size;i++){
    printf("enter element to add:");
    scanf(" %c",&value);
    push(value);
    
    
}
  
   pop();
   display();
    return 0;
}
