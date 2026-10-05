#include <stdio.h>

int main () {
  int num1;
  int division = 10000;

  printf("Enter one five-digit number: ");
  scanf("%d", &num1);

  for (int i = 0; i < 5; i++) {
      printf ("%d ", num1 / division);
      num1 %= division;
      division /= 10;
  }

}
