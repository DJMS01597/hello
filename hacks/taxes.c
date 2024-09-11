/**
 * Author: Joseph Flodman
 *         jflodman3@huskers.unl.edu
 * Date: 09/9/2024
 *
 * Taxes
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(){

double agi;
double tax;
double numChildren;
double reducedTax;
printf("Enter your Adjusted Gross Income:  ");
scanf("%lf", &agi);

printf("Enter the number of children:  ");
scanf("%lf", &numChildren);

if(agi <= 19,900){
tax = 0.10 * agi;

}else if(agi <= 81,050){
 tax = 1990 + 0.12 * (agi - 19900);
}else if(agi <= 172750){
 tax = 9328 + 0.22 * (agi - 81050);
}else if(agi <= 329850){
tax = 29502 + 0.24 * (agi - 172750);
}else if(agi <= 418850){
tax = 67206 + 0.32 * (agi - 329850);
}else if(agi <= 628,300){
tax = 95686 + 0.35 * (agi - 418850);
}

reducedTax = (numChildren * 2000) - tax;

  if(tax < 0){
  tax = 0;
}

printf("Your total tax is: $%.2f\n", tax);

return 0;


}

