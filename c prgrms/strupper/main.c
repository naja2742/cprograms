/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main()
{
    char ch[20] = "hello";
    int i = 0;

    while (ch[i]) {
        ch[i] = toupper(ch[i]);  // Convert each character to lowercase
        i++;
    }

    printf("%s\n", ch);

    return 0;
}


