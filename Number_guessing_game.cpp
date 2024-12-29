#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main (){
	
	
	// generate a random number 
	srand(time(0));
	
	int secret_number = rand() % 100 + 1;
	
	int guess;
	
	cout << "Can you guess a number which the computer generates ? " <<endl;
	
	// Start guessing
	while (true){
		
		cout << " Enter your guess : ";
		cin >> guess;
		
		if( guess < secret_number){
		
		cout << "Too low! Try again :) " << endl;
		
		}else if (guess > secret_number){
		
		cout << "Too High! Try again :) " << endl;
		 
		}else {
			
			cout << "CONGRATULATIONS ! You Guess Perfectly ... " <<endl;
			break;
		}	
		
	}
	
	return 0;
} 
