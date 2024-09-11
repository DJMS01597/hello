/**Author: Joseph Flodman
 *         jflodman3@huskers.unl.edu
 * Date: 9/10/2024
 *
 */
#include <stdio.h>
#include <math.h>

int main(){

double a;
double b;
double result;
double option;

printf("Enter two numbers: ");
scanf("%lf %lf", &a, &b);

printf("Choose an operation:\n");
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Logarithm (base a)\n")

scanf("%d", &option);

switch(option) {
  case 1:
result = a + b;
printf("Result: %.2f\n", result);
break;

case 2:
result = a - b;
printf("Result: %.2f\n", result);
break;

case 3:
result = a * b;
printf("Result: %.2f\n", result);
break;

case 4:
if (b != 0) {
result = a / b;
printf("Result: %.2f\n", result);
break;
default:
printf("ERROR: Unknown value!");
break;
else{ printf("ERROR: Division by zero!\n");
}
break;

case 5:
if (a > 0 && b > 0) {
result = log(b) / log(a);
printf("Result: %.2f\n", result);
}else{
printf("ERROR: Both numbers must be positive for logarithms!\n");
}
break;

default:
printf("ERROR: Invalid operation!\n");
}
return 0;
}

}

















}
