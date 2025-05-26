/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    scanf("%s",str);
    printf("\nCharacter Frequencies:\n");
    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        
        if (str[i] == '0')
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';  
            }
        }

        if (str[i] != '0') {
            printf("%c = %d\n", str[i], count);
        }
    }


    return 0;
}
