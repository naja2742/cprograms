/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[4][3]={{1,2,3},{2,4,6},{5,6,7},{7,8,9}};
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("arr[%d][%d]=[%d]\n",i,j,arr[i][j]);
        }
    }

    return 0;
}