#include <stdio.h>
#include <string.h>



/* Hard coding exchange rates*/

struct Currency {
    float dollar_value;
    char name[50];
};

struct Currency exchange_rates(char c){
    struct Currency currency;

    switch (c)
    {
    case 'D': // dollars
        currency.dollar_value = 1;
        strcpy(currency.name, "US Dollars");
        break;
    
    case 'E': //Euro
        currency.dollar_value = 1.06340;
        strcpy(currency.name, "Euros");
        break;
    
    case 'R': //Rupee
        currency.dollar_value =0.01203;
        strcpy(currency.name, "Indian Rupees");
        break;

    case 'Y': // Japanese Yen
        currency.dollar_value = 0.00674;
        strcpy(currency.name, "Japanese Yen");
        break;

    case 'W': //Korean Won
        currency.dollar_value = 0.00075;
        strcpy(currency.name, "Korean Won");
        break;

    case 'P': //English Pounds
        currency.dollar_value = 1.22410;
        strcpy(currency.name, "Great Britan Pounds");
        break;
    
    default:
        currency.dollar_value = 0;
        strcpy(currency.name, "Unknown");
        break;
    }
    return currency;
}


float convert(struct Currency from, struct Currency to, float sum) {
    sum = sum * (from.dollar_value / to.dollar_value);
    return sum;
}



/* Creating a UI for the project*/

int main () {
float amount , converted_amount=0;
char from_currency_code, to_currency_code ;

struct Currency from_currency, to_currency;

printf("Available Currencies Include : \n US Dollars : D \t Euros : E \t Indian Rupees : R \t Japenese Yen : Y \t Korean Won : W \t Great Britan Pounds : P \n");
printf("Please type the corresponding letters for each currency when asked. \n");
printf("Please enter the currency you want to convert from (D E R Y W P) :\n");
scanf(" %c", &from_currency_code);
printf("Please enter the currency you want to convert to (D E R Y W P) \n");
scanf(" %c", &to_currency_code);
printf("Please enter the amount you wish to convert \n");
scanf(" %f", &amount);


from_currency = exchange_rates(from_currency_code);
to_currency = exchange_rates(to_currency_code);

converted_amount = convert(from_currency, to_currency, amount);
printf("%.2f %s= %.2f %s\n", amount, from_currency.name, converted_amount, to_currency.name);
return 0;

}
