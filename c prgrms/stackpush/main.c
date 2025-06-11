/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
void display(){
    if(top==-1){
        printf("stack is empty:\n");
    }else{
        printf("\n stack elements are:");
        for(i=0;i<=top;i++){
            printf("%c",stack[i]);
        }
        printf("\n");
    }
    
}
int main(){
    char val;
    for(i=0;i<size;i++){
        printf("enter element to add:");
        scanf(" %c",&value);
        push(value);
    }
    display();
    
    return 0;
    
}



