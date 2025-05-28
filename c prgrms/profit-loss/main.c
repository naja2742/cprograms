/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cost_price,selling_price,profit,loss;
    printf("enter cost price:");
    scanf("%f",&cost_price);
    printf("enter selling price:");
    scanf("%f",&selling_price);
    if(selling_price>cost_price){
        profit=selling_price-cost_price;
        printf("profit:%.2f\n",profit);
    }else if(cost_price>selling_price){
        loss=cost_price-selling_price;
        printf("loss:%.2f\n",loss);
    }else{
        printf("no profit,no loss.\n");
    }

    return 0;
}
