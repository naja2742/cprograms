/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, discriminant, root1, root2, realPart, imagPart;

  printf("Enter coefficients a, b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Root 1 = %.2lf and Root 2 = %.2lf\n", root1, root2);
  } else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("Root 1 = Root 2 = %.2lf\n", root1);
  } else {
    realPart = -b / (2 * a);
    imagPart = sqrt(-discriminant) / (2 * a);
    printf("Root 1 = %.2lf + %.2lfi and Root 2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
  }

  return 0;
}
