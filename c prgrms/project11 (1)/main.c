/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int customid, unitconsumed;
    char name[20];
    float amount,perunit,surcharge,netamount;
    printf("enter customer id:");
    scanf("%d",&customid);
    printf("enter customer name:");
    scanf("%s",name);
    printf("enter unit consumed:");
    scanf("%d",&unitconsumed);
    if(unitconsumed<=199)
    {
       perunit=1.20;
    }else if(unitconsumed>=200&&unitconsumed<400)
    {
       perunit=1.50;
    }else if(unitconsumed>=400&&unitconsumed<600)
    {
        perunit=1.80;
    }
    else 
    {
        perunit=2.00;
    }
    
    
    
    amount=unitconsumed * perunit;
    
    
    if(amount>400)
    {
        surcharge=amount*0.15;
    }
    
    netamount=amount+surcharge;
    if(netamount <100)
    {
        netamount=100;
    }
    printf("\n customerid:%d", customid);
    printf("\n customername:%s",name);
    printf("\n unitconsumed:%d", unitconsumed);
    printf("\n amount charged @ rs%.2f perunit:%.2f", perunit, amount);
    printf("\n surcharge amount:%.2f", surcharge);
    printf("\n net amount paid by customer:%.2f\n",netamount);
    
    
    
    
    
    
    
    

    return 0;
}
