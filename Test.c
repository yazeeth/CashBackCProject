//C code written by Yazeeth
// This is a simple systems that calculate the offers and shows it to customer according to their supscription level (Platinum Gold Silver).
//This is seasonal limited offer so only the first five customers can get this offer, Invalid inputs will not be added to customer count. 
//Min amount of purchase to get the cashback offer is 1000.
//Offers are given for last 5000 Rs of their purchase.
//Invalid user input throws some error and customer should refill the form.
//C code will generate a Token ID for every successfull entry of the purchase.
//So the customer can provide the received id to the counter to claim the offer 
//This code is written for Mid term assignment SLIIT Year 1 Semester 1.
//In this program Repitition, Selection, Calculation Methods are used

#include <stdio.h>
#include <stdlib.h>
int main() {
	
	printf("---------------------------------------------------------------------------------------------\n");
	printf("------------------------------ Welcome To Cargills Food City --------------------------------\n");
	printf("-------------------------- Seasonal Offer 2020 - Happy New Year -----------------------------\n");
	printf("---------------------------------------------------------------------------------------------\n");
	
	int i , n, x;
	char name[30];
	int id;
	double amount;
	char ptype;
	float discount;
	
	n = 5;
	x = 0;
	i = 0;
	
	while( i < n ){
	
		id = 0;
		amount = 0.0;
		discount = 0.0;
		
		printf("\n\n--------------------------- Congratulations! You are Coustomer %d ---------------------------\n\n", i-x+1 );
	
		printf("Please Enter Your Name : ");
		scanf("%s", name);
		printf("Type P for Platinum\nType G for Gold\nType S for Silver\nPlease Enter Your Privilage Type :");
		scanf( " %s",  &ptype);
		printf("Please Enter Your 5 digit Privilage Card No :");
		scanf("%d", &id);
		printf("Please Enter Total Amount of Your Bill :");
		scanf("%lf", &amount);	
	
		if ( id >= 0 && id <= 99999 ){
			
			if ( amount < 1000 ){
				x++;
				n++;
				i++;
				printf("\nThank You %s\n", name);
				printf("Sorry, You have to purchase more than 1000 LKR to claim this offer\n");
				printf("Thanks for purchasing. Come again.\n\n");
				printf("---------------------------------------------------------------------------------------------\n\n");		
			}
			if ( amount > 1000 && amount <= 5000 ){
	
				if ( ptype == 'P' || ptype == 'p' ) {
					discount = amount * ( 25.0 / 100.0 );
					printf("\nThank You %s\n", name);
					printf("Your Cashback amount is Rs %.2f /=\n", discount);
					printf("Your Cashback Token Number is %d-%d-%c\n", id ,i-x+1 , ptype );
					printf("Please Provide Your Token Number to Cashback Counter and Claim Your Offer\n");
					printf("Thanks for purchasing. Have a Nice Day. Come again. :) \n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");
					i++;		
				}
				else if ( ptype == 'G' || ptype == 'g' ) {
					discount = amount * ( 20.0 / 100.0 );
					printf("\nThank You %s\n", name);
					printf("Your Cashback amount is Rs %.2f /=\n", discount);
					printf("Your Cashback Token Number is %d-%d-%c\n", id ,i-x+1 , ptype );
					printf("Please Provide Your Token Number to Cashback Counter and Claim Your Offer\n");
					printf("Thanks for purchasing. Have a Nice Day. Come again. :) \n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");
					i++;		
				}
				else if ( ptype == 'S' || ptype == 's' ) {
					discount = amount * ( 15.0 / 100.0 );
					printf("\nThank You %s\n", name);
					printf("Your Cashback amount is Rs %.2f /=\n", discount);
					printf("Your Cashback Token Number is %d-%d-%c\n", id ,i-x+1 , ptype );
					printf("Please Provide Your Token Number to Cashback Counter and Claim Your Offer\n");
					printf("Thanks for purchasing. Have a Nice Day. Come again. :) \n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");
					i++;		
				}
				else {
					x++;
					n++;
					i++;
					printf("\nThank You %s\n", name);
					printf("Sorry, You have Entered Invalid Privilage Type.\nPlease try again\n");
					printf("Thanks for purchasing. Come again.\n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");				
				}



			
			}

			if ( amount >  5000 ){

				if ( ptype == 'P' || ptype == 'p' ) {
					discount = 5000 * ( 25.0 / 100.0 );
					printf("\nThank You %s\n", name);
					printf("Your Cashback amount is Rs %.2f /=\n", discount);
					printf("Your Cashback Token Number is %d-%d-%c\n", id ,i-x+1 , ptype );
					printf("Please Provide Your Token Number to Cashback Counter and Claim Your Offer\n");
					printf("Thanks for purchasing. Have a Nice Day. Come again. :) \n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");
					i++;		
				}
				else if ( ptype == 'G' || ptype == 'g' ) {
					discount = 5000 * ( 20.0 / 100.0 );
					printf("\nThank You %s\n", name);
					printf("Your Cashback amount is Rs %.2f /=\n", discount);
					printf("Your Cashback Token Number is %d-%d-%c\n", id ,i-x+1 , ptype );
					printf("Please Provide Your Token Number to Cashback Counter and Claim Your Offer\n");
					printf("Thanks for purchasing. Have a Nice Day. Come again. :) \n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");
					i++;		
				}
				else if ( ptype == 'S' || ptype == 's' ) {
					discount = 5000 * ( 15.0 / 100.0 );
					printf("\nThank You %s\n", name);
					printf("Your Cashback amount is Rs %.2f /=\n", discount);
					printf("Your Cashback Token Number is %d-%d-%c\n", id ,i-x+1 , ptype );
					printf("Please Provide Your Token Number to Cashback Counter and Claim Your Offer\n");
					printf("Thanks for purchasing. Have a Nice Day. Come again. :) \n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");
					i++;		
				}
				else {
					x++;
					n++;
					i++;
					printf("\nThank You %s\n", name);
					printf("Sorry, You have Entered Invalid Privilage Type.\nPlease try again\n");
					printf("Thanks for purchasing. Come again.\n\n");
					printf("---------------------------------------------------------------------------------------------\n\n");				
				}
	
	
			}
			
		}
		else {
			x++;
			n++;
			i++;
			printf("\nThank You %s\n", name);
			printf("Sorry, You have Entered Invalid Privilage Card Number.\nPlease try again\n");
			printf("Thanks for purchasing. Come again.\n\n");
			printf("---------------------------------------------------------------------------------------------\n\n");
		}
	
	}
	
	printf("---------------------------------------- The Offer Ended ------------------------------------\n");
	printf("------------------ We will give more valuable offers asap, Please come again----------------\n");
	printf("--------------------------------------- Cargills Food City ----------------------------------\n");
	printf("---------------------------------------------------------------------------------------------\n\n");
	
	return 0;
}
