#include <stdio.h>

int main()

{
//Defining varaiables for goods
float tomatoWeight;
float cucumberWeight;
float appleWeight;
float cherryWeight;

//Defining pireces for goods
float tomatoPrice = 4.50;
float cucumberPrice = 2.80;
float applePrice = 2.50;
float cherryPrice = 5.60;

// Welcome message and inputs for qty of goods
printf("#############################\nWelcome to our grocery store!\nToday we offer:\n 1.Tomato - %0.2f [lv/kg]\n 2.Cucumber - %0.2f [lv/kg]\n 3.Apple - %0.2f [lv/kg]\n 4.Cherry - %0.2f [lv/kg]\n", tomatoPrice, cucumberPrice, applePrice, cherryPrice);
printf("\nHow many kilograms of tomatos would you like to buy?\n");
scanf("%f", &tomatoWeight); 
printf("How many kilograms of cucumber would you like to buy?\n");
scanf("%f", &cucumberWeight);
printf("How many kilograms of apples would you like to buy?\n");
scanf("%f", &appleWeight);
printf("How many kilograms of cherries would you like to buy?\n");
scanf("%f", &cherryWeight); 

//Calculating the price of the inputed goods
float tomatoTotal = tomatoWeight*tomatoPrice;
float cucumberTotal = cucumberWeight*cucumberPrice;
float appleTotal = appleWeight*applePrice;
float cherryTotal = cherryWeight*cherryPrice;

//Grand total of price and weight
float grandTotal = tomatoTotal+cucumberTotal+appleTotal+cherryTotal;
float overAllWeight = tomatoWeight+cucumberWeight+appleWeight+cherryWeight;
printf("\nYou have ordered the following: \nTomato: %0.3fkg and price %0.2flv\nCucumber: %0.3fkg and price %0.2flv\nApple: %0.3fkg and price %0.2flv\nCherry: %0.3fkg and price %0.2flv", tomatoWeight, tomatoTotal, cucumberWeight,cucumberTotal, appleWeight, appleTotal, cherryWeight, cherryTotal);
printf("\n###############\nYour bill is: %0.2f lv and weights %0.3fkg",grandTotal, overAllWeight);

return 0;
}