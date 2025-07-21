#include<stdio.h>
int main () {
int x, y , add , subtraction, multiplication, modulus, quotient;
float division;
printf("Enter The First Number X (the larger)");
scanf(" %d", &x);
printf("Enter The Second Number Y (the smaller)");
scanf(" %d", &y);
add = x + y;
subtraction = x - y;
multiplication = x * y;
division = (float) x / y;
quotient = x / y;
modulus = x % y;
printf("Addition = %d\n", add);
printf("Subtraction = %d\n", subtraction);
printf("Multiplication = %d\n", multiplication);
printf("Division = %0.2f\n", division);
printf("Quotient (integer) = %d\n", quotient);
printf("What is left after fitting all integer Ys into One X (modulus) = %d\n", modulus);
return 0;
}
