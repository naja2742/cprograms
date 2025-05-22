/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rollno,p,c,m;
    float percentage,tm;
    printf("enter rollno of the student:");
    scanf("%d",&rollno);
    
    printf("mark in physics is :");
    scanf("%d",&p);
    
    printf("marks in chemistry is:");
    scanf("%d",&c);
    
    printf("marks in maths is:");
    scanf("%d",&m);
    
    tm=p+c+m;
    percentage=(tm/300)*100;

    printf("total marks=%.f\n",tm);
    
    printf("percentage=%.2f\n",percentage);
    
    
    if(percentage>=60)
    {
        printf("division=first");
    }else if("percentage>=50")
    {
        printf("division=second");
    
    }else if(percentage>=40)
    
    {
        printf("division=third");
    }
    else
    {
        printf("division=fail");
    }
    
    return 0;
}