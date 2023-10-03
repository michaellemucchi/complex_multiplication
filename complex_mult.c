#include <stdio.h>


int main() {
  int imaginary1;
  int real1;
  int imaginary2;
  int real2;
  int solution_imaginary;
  int solution_real;

  printf("Enter the first complex number in the form ai + b: ");
  scanf("%di + %d", &imaginary1, &real1);
  printf("Enter the second complex number in the form ai + b: ");
  scanf("%di + %d", &imaginary2, &real2);

  solution_imaginary = ((imaginary1 * real2) + (imaginary2 * real1));
  solution_real = (((imaginary1 * imaginary2) * -1) + (real1 * real2));


  printf("(%di + %d) * (%di + %d) = %di + %d", imaginary1, real1, imaginary2, real2, solution_imaginary, solution_real);




}
