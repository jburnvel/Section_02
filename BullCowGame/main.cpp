#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

//the entry point for our application
int main()
{
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	return 0; // exit the application
}

//
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcom to Bulls and Cows, a fun word game" << endl;
	cout << "Can you guees the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

//
void PlayGame()
{
	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		string Guess = "";
		Guess = GetGuess();
		cout << "Your guess wa: " << Guess << endl;
		cout << endl;
	}
}

//
string GetGuess() 
{
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

//
bool AskToPlayAgain()
{
	cout << "Do you want to play again?";
	string Response = "";
	getline(cin,Response);
	cout << "Is is y:" << (Response[0] == 'y');
	cout << endl;
	return false;
}
