#include<iostream>
#include<string>
using namespace std;


int main(){
	
	//1. ask number of each item they would like to buy
	//2. sum it up and give them their total
	
	//variables:
	
		//prices
	int friz_prc = 25, friz_tax = 0;
	int kim_prc = 20;
	int CC_prc = 13;
	int FnC_prc = 11, FnC_tax = 0;
	
	float cher_prc = 0.05;
	float app_prc = 0.80;
	float milk_prc = 4.99;
	float schn_prc = 16.50;
	
		//input number of Items in Cart
	int friz;
	int kim;
	int CC;
	int FnC;
	
	float cher;
	float app;
	float milk;
	float schn;
	
	
	//presenting costumers their options:
	cout << "Welcome to the store \n";
	cout << "       Items: \n";
	cout << "  cherries - 5c ea \n";
	cout << "  apples - 80c ea \n";
	cout << "  milk - $4.99 \n";
	cout << "  frizbee - $25 (plux tax) \n";
	cout << "  kimchi - $20 \n";
	cout << "  curry chicken - $13 \n";
	cout << "  Fish n Chips - $11 (+ tax) \n";
	cout << "  Schnitzel - $16.50 \n";
	cout << "(Press zero if you don't want to buy any so you won't get charged) \n";
	
	//input Items in Cart
	cout << "\n How much cherries would you like? ";
	cin >> cher;
	cout << "And how many apples? ";
	cin >> app;
	cout << "Milk? ";
	cin >> milk;
	cout << "Frizbees? ";
	cin >> friz;
	cout << "Kimchi? ";
	cin >> kim;
	cout << "Curry chicken? ";
	cin >> CC;
	cout << "Schnitzel? ";
	cin >> schn;
	cout << "Fish in chips ";
	cin >> FnC;
	
	
		//(added tax prices as a challenge)
	if (friz > 0){
		friz_tax = friz_tax + 5;
	}
	
	if (FnC > 0){
		FnC_tax = FnC_tax + 2;
	}
	
	
	//calculate prices
	float cher_tot = cher * cher_prc;
	float app_tot = app * app_prc;
	float milk_tot = milk * milk_prc;
	float FnC_tot = (FnC * FnC_prc) + FnC_tax;
	
	int kim_tot = kim * kim_prc;
	int friz_tot = (friz * friz_prc) + friz_tax;
	int CC_tot = CC * CC_prc;
	int schn_tot = schn * schn_prc;
	

	//subtotal is price of everything BEFORE the tax or shipping prices are added

	
	float TOTAL = cher_tot + app_tot + milk_tot + kim_tot + friz_tot + CC_tot + schn_tot + FnC_tot;
	int TAX = friz_tax + FnC_tax;
	
	// output prices
	
	cout << endl;
	cout << "\n Tax: $" << TAX;
	cout << "\n Your total is $" << TOTAL;
	cout << "\n Have a nice day:)";
	
	
	
	
	return 0;
}
