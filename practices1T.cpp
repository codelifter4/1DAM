/**

* Program to: My solutions to the '1T prog' practices.

* File name: practices1T.cpp
* Author: Pepe Puentes Sanchez
* Date: 13/12/2018 - 

* Notes:

*/

#include <iostream>
#include <cmath>
#include <string.h>

#define BLACK_COLOR "\033[1;30m"
#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define YELLOW_COLOR "\033[1;33m"
#define BLUE_COLOR "\033[1;34m"
#define PURPLE_COLOR "\033[1;35m"
#define CYAN_COLOR "\033[1;36m"
#define WHITE_COLOR "\033[1;39m"
#define RESTORE_DEFAULT_COLOR "\033[0m"

using namespace std;

/**
* @brief this method print the # template
* @param nothing
* @pre The user has to have the screen output active
* @post Template printed
* @return nothing
* @autor Gras's sons
* @ver 1.0


void PrintTemplate(char &chosen_letter, char &last_introduced_letter){


	cout << endl;
	// PANEL header
	cout << GREEN_COLOR << "       18/04L<3P" << RESTORE_DEFAULT_COLOR << endl;

	// PRINT the left column
	for (int Left_column = 1; Left_column <= 25; Left_column++){

		cout << RED_COLOR << " #" << RESTORE_DEFAULT_COLOR;
	}

	cout << endl; // white space

	// PRINT the right row
	for (int Right_row = 1; Right_row < 20; Right_row++){

		// PRINT the '#' of the rows
    	for (int Left_row = 1; Left_row <= 1; Left_row++){

            cout << RED_COLOR << " #" << RESTORE_DEFAULT_COLOR;
        }
        
        for (int Prntsy = 1; Prntsy <= 50; Prntsy++){

        		// If the introduced letter is an 'I'
				// and the last one was not another 'I' then print '_'
				if ((chosen_letter == 'I')){

							 // Increase the width of the rows +1
					cout << "_";

				// else if the chosen letter was a S then print '/'
				}else if (chosen_letter == 'S'){

					 // Increase the number of columnes +1
					cout << "/";

				// else if chosen letter is a 'B' then print '\'
				}else if (chosen_letter == 'B'){

										 // Increase the width
					cout << "\\";
				}
        }

        // PRINT the right row in red color
		cout << RED_COLOR << " #" << RESTORE_DEFAULT_COLOR << endl;
	}

    // PRINT the right column in red
	for (int Right_column = 1; Right_column <= 25; Right_column++){

		cout << RED_COLOR << " #" << RESTORE_DEFAULT_COLOR;
 	}

 	cout << endl; //white space
 	cout << endl; //white space
	cout << BLUE_COLOR << "========================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space
}

/**
* @brief this method filter the chose letter while this one is not an I, S, B
* @param nothing
* @pre Ask for a letter
* @post letter filted
* @return nothing
* @autor Gras's sons
* @ver 1.0


void FilterLetter(char &chosen_letter){

	do{

		cin >> chosen_letter;
		chosen_letter = toupper(chosen_letter); // Up te introduced letter

	}while(!((chosen_letter = 'I') || (chosen_letter = 'S') || (chosen_letter = 'B')));
}

/**
* @brief this method gives the welcome to the StarWarsII problem
* @param nothing
* @pre The user has to have the screen output active
* @post contact problem solution
* @return nothing
* @autor Gras's sons
* @ver 1.0


void StarWarsIIWelcome(){

	cout << BLUE_COLOR << " ======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << " ------------------- " << RESTORE_DEFAULT_COLOR << YELLOW_COLOR << " STAR WARS II: PANEL  " << RESTORE_DEFAULT_COLOR << BLUE_COLOR << " ------------------" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << " ======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space

	cout << GREEN_COLOR << "              --- LUCASFILM --- " << RESTORE_DEFAULT_COLOR << endl;
	cout << YELLOW_COLOR << "       --- EPISODE IV: A NEW HOPE --- \n" << RESTORE_DEFAULT_COLOR << endl;
	cout << YELLOW_COLOR << "   A LONG TIME AGO IN A GALAXY FAR, FAR AWAY.. " << RESTORE_DEFAULT_COLOR << endl;
	cout << endl;
	cout << YELLOW_COLOR << "    |  IT'S A PERIOD OF CIVIL WAR        | \n    |  REBEL STRIKING FROM A HIDEN BASE  | \n    |  HAVE WON THEIR FIRST VICTORY      | \n    |  AGAINST THE EVIL GALATIC EMPIRE   | " << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; //white space
}

/**
* @brief this method gives my solution to the StarWarsI problem
* @param nothing
* @pre nothing
* @post StarWarsI problem solution
* @return nothing
* @autor Gras's sons
* @ver 1.0


void StarWarsII(){

	char chosen_letter; // letter chosen ('I' 'S' or 'B')
	int letter_counter = 0; // n of letters introduced
	char last_introduced_letter; // last introduced letter
	int width_row = 5; // width of the '#' row
	int heigth_column = 5; // height of the '#' column

	// Gives the welcome to the user to the Star Wars II Problem
	StarWarsIIWelcome();

	// Ask to the user for a letter
	cout << BLUE_COLOR << "      PANEL READY TO THE FIGHT!!!, INTRODUCE 'I' TO KEEP, \n      'S' TO UP OR 'B' TO GET DOWN: " << RESTORE_DEFAULT_COLOR;
	FilterLetter(chosen_letter);

	PrintTemplate(chosen_letter, last_introduced_letter);

}

/**
* @brief Compares the strings to say if exist relationship or not 
* @param string &name, string &relationship
* @pre name and kind asked
* @post integer valided
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/

void ExistRelationship(string &name, string &relationship){

	string C3P0 ("C-3PO");
	string Princess ("Princess"); // 
	string Prince ("Prince"); 	// Strings to compare the real cases 
	string maker ("maker");	  	// with the name or relationship that     
	string Luke ("Luke");		// the user is untroducing
	string father ("father");
	string Father ("Father");

	// Now if the comparison is right, print in the screen the relationship phrase

	if ((name == C3P0) && (relationship == maker)){

		cout << YELLOW_COLOR << "    " << name << BLUE_COLOR << ", IM YOUR " << YELLOW_COLOR << relationship << RED_COLOR << " <3" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space

	}else if ((name == Princess) && (relationship == Prince)){

		cout << YELLOW_COLOR << "    " << name << BLUE_COLOR << ", IM YOUR " << YELLOW_COLOR << relationship << RED_COLOR << " <3" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space

	}else if ((name == Prince) && (relationship == Princess)){

		cout << YELLOW_COLOR << "    " << name << BLUE_COLOR << ", IM YOUR " << YELLOW_COLOR << relationship << RED_COLOR << " <3" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space

	}else if ((name == Luke) && (relationship == Father)){

		cout << YELLOW_COLOR << "    " << name << BLUE_COLOR << ", IM YOUR " << YELLOW_COLOR << relationship << RED_COLOR << " <3" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space

	}else if ((name == Luke) && (relationship == father)){

		cout << RED_COLOR << "    X--- TOP SECRET ---X" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space

	}else{

		cout << RED_COLOR << "    WE COULDN'T FOUND A RELATIONSHIP MAYBE \n   YOUR'RE JUST A BASTARD LIKE JON SNOW :/" << RESTORE_DEFAULT_COLOR << endl;
	}
} 

/**
* @brief this method filter an integer number
* @param any number
* @pre ask for a number
* @post integer valided
* @return nothing
* @autor Gras's sons
* @ver 3.0
*/

void IntCasesFilter(int &n){

	// dont save the number while this one is not an int
	while (!(cin >> n)){

		cout << RED_COLOR << "  R2-D2 Introduce an integer number PLS: " << RESTORE_DEFAULT_COLOR << endl;

		cin.clear(); // clean the introduced valor unless it is a number
		cin.ignore(255, '\n'); // ignore the others characters
	}
}

/**
* @brief this method gives the welcome to the StarWars I problem
* @param nothing
* @pre The user has to have the screen output active
* @post contact problem solution
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/


void StarWarsIWelcome(){

	cout << BLUE_COLOR << " ======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << " ------------------- " << RESTORE_DEFAULT_COLOR << YELLOW_COLOR << " STAR WARS I: LUKE IM YOUR.... " << RESTORE_DEFAULT_COLOR << BLUE_COLOR << " ------------------" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << " ======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space

	cout << GREEN_COLOR << "             --- LUCASFILM --- " << RESTORE_DEFAULT_COLOR << endl;
	cout << YELLOW_COLOR << "     --- EPISODE I: THE PHANTOM MENACE --- \n"<< RESTORE_DEFAULT_COLOR << endl;
	cout << YELLOW_COLOR << "   A LONG TIME AGO IN A GALAXY FAR, FAR AWAY.. "<< RESTORE_DEFAULT_COLOR << endl;
	cout << endl;
	cout << YELLOW_COLOR << "    |  THE GALAXY IS IN A TURMOIL  | \n    |  GENERATIONS OF PEACE AND    | \n    |  JUSTICE HAVE BEEN DISRUPTED | \n    |  BY CORRUPTION AND GREED     | " << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; //white space
}

/**
* @brief this method gives my solution to the StarWarsI problem
* @param nothing
* @pre nothing
* @post StarWarsI problem solution
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/

void StarWarsI(){

	int test_case = 0; // var to stock an integer number of testing case
	string name; // var to stock a string of the introduced name
	string relationship; // var to stock a string of the relationship


	StarWarsIWelcome(); // Introduce the user to the film

	// Ask to the user how many test he/she want to try

	do{

		cout << BLUE_COLOR << "  Introduce how many test case do you want to try: " << RESTORE_DEFAULT_COLOR;

		IntCasesFilter(test_case); // call the method to filter the introduced valor

	}while (test_case <= 0); // While the number of taste cases are more than zero
	
	cout << endl; // white space

	// Ask to the user for a name to search a relationship
	for (int i = 0; i < test_case; i++){

		cout << BLUE_COLOR << "  Introduce a " << GREEN_COLOR "name " << BLUE_COLOR "to search a " << GREEN_COLOR << "relationship" BLUE_COLOR ": " << RESTORE_DEFAULT_COLOR;
		cin >> (name);

		cout << BLUE_COLOR << "  Introduce a " << GREEN_COLOR << "kinship" << BLUE_COLOR << " to search the " << GREEN_COLOR << "relationship" << BLUE_COLOR << ": " << RESTORE_DEFAULT_COLOR;
		cin >> (relationship);

		cout << endl;
		ExistRelationship(name, relationship);

	}

	cout << endl;
	cout << BLUE_COLOR << "=======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space
}

/**
* @brief Method to save valors only if this is != to '0' and '1'
* @param the current valor
* @pre nothing
* @post The current valor is == 0 || 1
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/

void ContactFilter(int &current_valor){

	// Dont save the current valer unless this one is a '0' or an '1'
	do{
		// save the current valor
		cin >> current_valor;

	}while ((current_valor != 0) && (current_valor != 1));
}

/**
* @brief Method to calculate if the number is prime or not
* @param n number
* @pre a number to calculated 
* @post nothing
* @return true or false
* @autor Gras's sons
* @ver 1.0
*/

bool IsPrime(int n){

	bool prime = true;
	int counter = 2; // First number to divide

	while ((counter < n) && (prime)){

		// If you can divide the number btwn other this number is not prime
		if (n % counter == 0){

			prime = false;
		}

		counter++ ; // boost the counter of the divide number
	}

	return (prime);// return if this numer is prime or not
}

/**
* @brief Method to print the factor 
* @param int factor, int n_factors
* @pre n_factors > 1
* @post factor printed
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/

void PrintFactor(int factor, int n_factors){

	// If the number of factors is > 1 
	if (n_factors > 1){

		cout << BLUE_COLOR << " *"; //print the product character
	}

	cout << GREEN_COLOR << "  " << factor << RESTORE_DEFAULT_COLOR; // print the factor
}

/**
* @brief Method to analyze each introduced valor
* @param (int &current_valor, int &one_counter, int &zero_counter, int &product, int &n_factors, bool &is_cabbalistic)
* @pre (zero_counter < 5; product > 0; current_valor == 0 || 1) 
* @post nothing
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/

void ValorAnalyze(int &current_valor, int &one_counter, int &zero_counter, int &product, int &n_factors, bool &is_cabbalistic){
	
	// If the current valor is a '0'
	if (current_valor == 0){

		// If the current valor is an '1'
		if (one_counter > 0){

			product *= one_counter; // Multiply for the introduced valor
			n_factors++; // boost the factors numbers

			// call the method printfactor
			PrintFactor(one_counter, n_factors);
			
			// If actually is cabbalistic
			if (is_cabbalistic)
			 			
			 	// The factor number is not prime
				if (!IsPrime(one_counter))

					is_cabbalistic = false;	// then the cabbalistic is not prime
				
			one_counter = 0; // restart the zero counter

			}

		zero_counter++; // reboost the zero counter +1
	}

		// else if the current valor is '1'
	else if (current_valor == 1){

		// and the last number was a '1'
		if (zero_counter > 0)

			zero_counter = 0; // then restart the zero counter

		one_counter++ ; // reboost the '1' counter
	}
}

/**
* @brief this method gives the welcome to the contact problem
* @param nothing
* @pre The user has to have the screen output active
* @post contact problem solution
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/


void ContactWelcome(){

	cout << BLUE_COLOR << " ======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << " -------------------------- " << RESTORE_DEFAULT_COLOR << GREEN_COLOR << " ALIEN CONTACT " << RESTORE_DEFAULT_COLOR << BLUE_COLOR << " ---------------------------" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << " ======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space

	cout << RED_COLOR << "  I'M THE FUCKN' DONALD TRUMP " << RESTORE_DEFAULT_COLOR << endl;
	cout << GREEN_COLOR << "  AND THIS IS THE" << BLUE_COLOR << " N.A.S.A" << RESTORE_DEFAULT_COLOR << endl;
	cout << RED_COLOR << "  WE NEED YOU TO DISCOVER WHAT THE FUCK ARE THIS FUCKIN' MESSAGES " << RESTORE_DEFAULT_COLOR << endl;
}

/**
* @brief this method gives my solution of the Contact problem
* @param nothing
* @pre nothing
* @post contact problem solution
* @return nothing
* @autor Gras's sons
* @ver 1.0
*/

void Contact(){

	int one_counter = 0;	// var to counts the '1' consecutively introduced
	int zero_counter = 0; // var to counts the '0' consecutively introduced
	int current_valor = 0;	// var to stock the current valor introduced
	int product = 1;		// var to stock the final product result
	int n_factors = 0;		// var to stock the number of factors
	bool is_cabbalistic = true; // var to stock if the numer is cabbalistic or not

	// call the method to welcome to the CONTACT WITH ALIENS EXPERIENCE
	ContactWelcome();

	// Trasmission start
	cout << GREEN_COLOR << "  SO LETS DO IT!, We are ready to get the trasmission...... " << RESTORE_DEFAULT_COLOR << endl;

	cout << endl; //white space

	// Introduce valors until we introduce five '0'
	do{

		// call the method to filter the introduced valor
		ContactFilter(current_valor);

		// call the method to analyze the introduced valor
		ValorAnalyze(current_valor, one_counter, zero_counter, product, n_factors, is_cabbalistic);

	}while (zero_counter < 5);

	//Resultados
	if (n_factors > 0){

		if (is_cabbalistic){

			cout << BLUE_COLOR << " = " << GREEN_COLOR << product << RESTORE_DEFAULT_COLOR << BLUE_COLOR << " ->  " << GREEN_COLOR << "YES" << endl;
			cout << endl; //white space
			cout << RED_COLOR << "  EY BASTARDS IM THE FUCKIN' PRESIDENT OF THE USA \n  IF U COME HERE I'LL DESTROY YOUR USELESS SPECIES!!!!" << RESTORE_DEFAULT_COLOR << endl;

		}else{
			cout << BLUE_COLOR << " = " << GREEN_COLOR << product << RESTORE_DEFAULT_COLOR << BLUE_COLOR << " -> " << RED_COLOR << "NO" << endl;
		}
	}else{ 

		cout << "The introduced number is not encrypt -.-" << endl;
	}
		

	cout << endl; // white space
	cout << BLUE_COLOR << "=======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space

}

/**
* @brief Method to show a menu with the differents options of our program
* @param nothing
* @pre The user has to have the screen output active
* @post menu showed
* @return nothing
* @author Gras's sons
* @ver 1.0 
*/

void menu(){

	char chose; // Var to stock up the menu chose 

	do{

		cout << GREEN_COLOR << " HI! LITTLE PADAWAN .... " << RESTORE_DEFAULT_COLOR << endl;
		cout << GREEN_COLOR << " JODA I AM ... \n IF GOOD MARKS IN PROG YOU WANT \n WORK HARD YOU MUST" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space
		cout << BLUE_COLOR << "  [1] Problem: " << YELLOW_COLOR << "Contact" << RESTORE_DEFAULT_COLOR << endl;
		cout << BLUE_COLOR << "  [2] Problem: " << YELLOW_COLOR <<  "Star Wars I: I'M YOUR..." << endl;
		cout << RED_COLOR << "  [3] Problem: " << RED_COLOR << "Star Wars II: Panel (F*CKED)" << endl;
		cout << RED_COLOR << "  [E] " << "Exit" << RESTORE_DEFAULT_COLOR << endl;
		cout << endl; // white space

		do{ 

			cout << BLUE_COLOR << "  Select a number to chose a program or " << RED_COLOR << "[E]" << BLUE_COLOR << " to exit: " << RESTORE_DEFAULT_COLOR ;
			cin >> chose;

			chose = toupper(chose); //Upper the introduced letter
			cout << endl;

		}while ((chose != '1') && (chose != '2') && (chose != '3') && (chose != 'E'));

		switch (chose){

			case '1':

				Contact();

				break;
			case '2':

				StarWarsI();

				break;

			case '3':

				//StarWarsII(); 

				break;
		}

	}while (chose != 'E');
}

/**
* @brief Method to stablish a graphic structure of the header program
* @param nothing
* @pre The user has to have the screen output active
* @post header formed correctly
* @return Nothing
* @author Gras's sons
* @ver 1.0
*/

void header(){

	// header
	cout << BLUE_COLOR << "=======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << "====================== " << RESTORE_DEFAULT_COLOR << PURPLE_COLOR << " Programming practices 1T " << RESTORE_DEFAULT_COLOR << BLUE_COLOR << " =====================" << RESTORE_DEFAULT_COLOR << endl;
	cout << BLUE_COLOR << "=======================================================================" << RESTORE_DEFAULT_COLOR << endl;
	cout << endl; // white space

	menu(); //  call the 'menu' method
}

int main(){

	// call the header method
	header();
}