#include <stdio.h>
#include <string.h>


float convert(char from, char to, float sum) {
    return sum;
}


/* Creating a UI for the project*/

int main () {
float amount , converted_amount=0;
char from_currency, to_currency ;

printf("Please enter the currency you want to convert from \n");
scanf(" %c", &from_currency);
printf("Please enter the currency you want to convert to \n");
scanf(" %c", &to_currency);
printf("Please enter the amount you wish to convert \n");
scanf(" %f", &amount);

converted_amount = convert(from_currency, to_currency, amount);
printf("The converted amount is %f\n", converted_amount);


return 0;

}
