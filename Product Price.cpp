#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main ()
{

//Declaring variables
    float lbsa = 0;
    float lbsb = 0;
    float lbsm = 0;
    float a = 0;
    float b = 0;
    float m = 0;
    float aa = 0;
    float bb = 0;
    float mm = 0;

//Declaring strings
    string i = "";
    string in = "";	
    string inp = "";
    string inpu = "";
	string input = "";
	string inputt = "";
	string inputtt = "";
	string inputttt = "";
	string inputtttt = "";
    string c = "";
    string cc = "";
    string ccc = "";

//Declaring structure
	struct product {
		int weight;
		float price;
	} ;


//Putting product names to the product structure
	product apple;
	product banana;
	product melon;
	
//Breaking down the product names and assigning values
	apple.weight = 0;
	apple.price = 0;
	banana.weight = 0;
	banana.price = 0;
	melon.weight = 0;
	melon.price = 0;

//Outputting an introductory statement
    cout << "This program caculates the total price of food you buy by dollars per pound." << endl;
    
    while (true) {
          cout << endl << "Press any key and then enter to continue: ";
          getline(cin, input);
          if (input != "0.0000001")
          {
                    goto Start;
                    }
    }
    
    Start:

//Clearing the screen
    system("CLS");

//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "Type 'change' and press enter to change product prices, or type 'c' and press" << endl << "enter to calculate price based on weight: ";
	
	while (true) {
        getline(cin, input);
   	if (input == "change")
	{
		goto Change;
		}
	else if (input == "c")
	{
		goto Continue;
		}
	}

//A bookmark in the program that the computer can go back to if you program it in
	Change:
//Clearing the screen
	system ("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "Please enter the password to change a product's price (or press 'c' to calculate a price): ";
	
	while (true) {
          getline(cin, inp);
          if (inp == "nedyak")
          {
                  goto YChange;
                  }
          else if (inp == "c")
	      {
               goto Continue;
               }
          
          else if (inp != "nedyak")
          {
               goto Wrongpass;
               }
	      

//A bookmark in the program that the computer can go back to if you program it in
	Wrongpass:
//Clearing the screen
              system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
              cout << "You have entered the wrong password. Type 'try' to try again or" <<endl << "type 'c' to calculate a product or type 'exit' to exit the program: ";
    
    while (true) {
          getline(cin, inpu);
          if (inpu == "try")
          {
                   goto Change;
                   }
          else if (inpu == "c")
          {
               goto Continue;
               }
          else if (inpu == "exit")
          {
               goto end;
               }
          }
    
//A bookmark in the program that the computer can go back to if you program it in
    YChange:
//Clearing the screen
    system("CLS");
    
//Asking user for input, getting input, then directing the computer to certain parts of the program
    cout << "Which product would you like to change? (Press 'c' to calculate a price): " << endl << endl;

        cout << "1 - Apple" << endl;
        cout << "2 - Banana" << endl;
        cout << "3 - Melon" << endl;
        cout << endl << "Pick a number: ";

	while (true) {
        getline(cin, inputt);
   	if (inputt == "2")
	{
		goto banana;
		}
	else if (inputt == "1")
	{
		goto apple;
		}
	else if (inputt == "3")
	{
		goto melon;
		}
	else if (inputt == "c")
	{
         goto Continue;
         }
	}

//A bookmark in the program that the computer can go back to if you program it in
	banana:
    system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "What would you like to change the price per pound of bananas to? $ ";
	cin >> banana.price;
	
	
          
	
	system("CLS");
	cout << "Would you like to change another one? (Y)es or (N)o: ";

	while (true) {
        getline(cin, inputtt);
   	if (inputtt == "Y")
	{
		goto YChange;
		}
	else if (inputtt == "y")
	{
		goto YChange;
		}
	else if (inputtt == "N")
	{
         goto Continue;
         }
    else if (inputtt == "n")
    {
         goto Continue;
         }
	}

//A bookmark in the program that the computer can go back to if you program it in
	melon:
    system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "What would you like to change the price per pound of melons to? $ ";
	cin >> melon.price;
	system("CLS");
	cout << endl << "Would you like to change another one? (Y)es or (N)o: ";

	while (true) {
        getline(cin, inputttt);
   	if (inputttt == "Y")
	{
		goto YChange;
		}
	else if (inputttt == "y")
	{
		goto YChange;
		}
	else if (inputttt == "N")
	{
         goto Continue;
         }
    else if (inputttt == "n")
    {
         goto Continue;
         }
	}

//A bookmark in the program that the computer can go back to if you program it in
	apple:
    system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "What would you like to change the price per pound of apples to?   $ ";
	cin >> apple.price;
	system("CLS");
	cout << "Would you like to change another one? (Y)es or (N)o: ";

	while (true) {
        getline(cin, inputtttt);
   	if (inputtttt == "Y")
	{
		goto YChange;
		}
	else if (inputtttt == "y")
	{
		goto YChange;
		}
	else if (inputtttt == "N")
	{
         goto Continue;
         }
    else if (inputttt == "n")
    {
         goto Continue;
         }
	}

//A bookmark in the program that the computer can go back to if you program it in
	Continue:
	system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
		cout << "What would you like to calculate the price of? (Type 'exit' to exit program or" << endl << "type 'change' to change a price): " << endl << endl;

        cout << "1 - Apple" << endl;
        cout << "2 - Banana" << endl;
        cout << "3 - Melon" << endl;
        cout << endl << "Pick a number: ";

	while (true) {
        getline(cin, in);
   	if (in == "1")
	{
		goto apple1;
		}
	else if (in == "2")
	{
		goto banana1;
		}
	else if (in == "3")
	{	
		goto melon1;
		}
	else if (in == "exit")
    {
         goto end;
         }
    else if (in == "change")
    {
         goto Change;
         }

	}

//A bookmark in the program that the computer can go back to if you program it in
	banana1:
    system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "How many pounds of bananas are you buying? ";
	cin >> lbsb;
	b = lbsb * banana.price;
	bb = b * 1.0685;
	cout << endl << "You will spend $" << bb << " on bananas" << endl << endl;
    cout << "Press 'c' and then 'enter' to continue: ";
    	while (true) {
        getline(cin, c);
   	if (c == "c")
	{
		goto Continue;
		}
	}
 
//A bookmark in the program that the computer can go back to if you program it in
	apple1:
    system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "How many pounds of apples are you buying? ";
	cin >> lbsa;
	a = lbsa * apple.price;
	aa = a * 1.0685;
	cout << endl << "You will spend $" << aa << " on apples" << endl << endl;
    cout << "Press 'c' and the 'enter' to continue: ";
    	while (true) {
        getline(cin, c);
   	if (c == "c")
	{
		goto Continue;
		}
	}

//A bookmark in the program that the computer can go back to if you program it in
	melon1:
    system("CLS");
//Asking user for input, getting input, then directing the computer to certain parts of the program
	cout << "How many pounds of melons are you buying? ";
	cin >> lbsm;
	m = lbsm * melon.price;
	mm = m * 1.0685;
	cout << endl << "You will spend $" << mm << " on melons" << endl << endl;
    cout << "Press 'c' and the 'enter' to continue: ";
    	while (true) {
        getline(cin, c);
   	if (c == "c")
	{
		goto Continue;
		}
	}
    
//A bookmark in the program that the computer can go back to if you program it in
    end:
//Exiting the program
        return 0;
}}
