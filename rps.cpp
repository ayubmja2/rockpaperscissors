// make something to control input to make the game go on if there is no winner.
// make some variables to hold game points and bool for do while.
// make a do while or while loop to handle game continuing or something.

// Now I can generated random numbers I need a way to take those numbers
//  and put it in some switch logic for the rock paper scissor game.

// IMPORTANT TODO: --> side not complete it in 4 days.

/*
    3. Make the Game best out of 3.
        - The game will run on a do loop until the condition of 3 games of
          rock paper scissors has been completed.
        - When that logic is complete tie it back to the decision of who one.
*/
//============================================================================================//

// imports
#include <iostream>
#include <random>

using namespace std;

// var assignment
bool loopControl = false; // control loop to continue running or not.
int low = 1;
int high = 3;

// call functions
void myMessage();
string userInput();
void decision(string user, string com);
int randomNumber(mt19937 &eng);

// Array of Rock, Paper, Scissors
string my_array[] = {"Rock", "Paper", "Scissors"};

// main run
int main()
{
    myMessage();
    random_device rd;  // obtain a random number from hardware
    mt19937 eng(rd()); // Seed the generator
    string answer = userInput();

    return 0;
}

// Terminal UI

void myMessage()
{

    cout << "Welome to a fun game of Rock, Paper, Scissors!" << endl;
    cout << "You are going to be playing this game with a computer. You better win mate!" << endl;
    cout << "==================================================================================" << endl;
}

// functions and other logic

// Random number generator
int randomNumber(mt19937 &eng)
{

    uniform_int_distribution<int> dist(0, 2); // Define the range

    int randomNumber = dist(eng);
    return randomNumber;
}

// Winner and Loser Decision control.

void decision(string user, string com)
{
    if ((user == "Rock" && com == "Rock") ||
        (user == "Paper" && com == "Paper") ||
        (user == "Scissors" && com == "Scissors"))
    {
        cout << "Wow a tie, You tied with a computer. Lol can you try harder. A tie is the samething as losing";
    }
    else if (user == "Rock" && com == "Paper")
    {
        cout << "Computer Wins. LOL";
    }
    else if (user == "Rock" && com == "Scissors")
    {
        cout << "User Wins. Finally!";
    }
    else if (user == "Paper" && com == "Rock")
    {
        cout << "User Wins. Finally";
    }
    else if (user == "Paper" && com == "Scissors")
    {
        cout << "Computer Wins. LOL";
    }
    else if (user == "Scissors" && com == "Rock")
    {
        cout << "Comptuer Wins. LOL";
    }
    else if (user == "Scissors" && com == "Paper")
    {
        cout << "User Wins. Finally";
    }
    else
    {
        cout << "Something Bad happened oops what you gonna do!";
    }
}

// User input

string userInput()
{
    string input;
    cout << "Enter Your Choice 'Rock' 'Paper' or 'Scissors'" << endl;

    getline(cin, input);
    return input;
}