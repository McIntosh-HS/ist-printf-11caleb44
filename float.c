#include <stdio.h>
int main() {
  float subtotal;
  float tax = .09;
  printf("How much are your groceries? ");
  scanf("%f", &subtotal);
  printf("How much the tax? "); //ask the user for the tax rate
  scanf("%f", &tax); // ask the user for the tax rate
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
