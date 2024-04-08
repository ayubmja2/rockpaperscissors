// make something to control input to make the game go on if there is no winner.
// make some variables to hold game points and bool for do while.
// make a do while or while loop to handle game continuing or something.
// use a switch statement makes sense now use that other than being a pleb and use if statements.

// Now I can generated random numbers I need a way to take those numbers
//  and put it in some switch logic for the rock paper scissor game.

// IMPORTANT TODO: --> side not complete it in 3 days.

/*
    1. Figure out a way to make 1 = paper, 2 = scissors, 3 = rock.
        - I think making a struct would work here.
    2. Get and compare user input with the computers pick.
        - Create logic that would compare both user and computer input to determine who won.
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
int randomNumber(mt19937 &eng);

// main run
int main()
{
    myMessage();
    random_device rd;  // obtain a random number from hardware
    mt19937 eng(rd()); // Seed the generator
    cout << randomNumber(eng);
    return 0;
}

// functions and other logic

// Terminal UI

void myMessage()
{

    cout << "Welome to a fun game of Rock, Paper, Scissors!" << endl;
    cout << "You are going to be playing this game with a computer. You better win mate!" << endl;
    cout << "==================================================================================" << endl;
}

int randomNumber(mt19937 &eng)
{

    uniform_int_distribution<int> dist(1, 3); // Define the range

    int randomNumber = dist(eng);
    return randomNumber;
}

void decision(int num)
{
    switch (num)
    {
    case1:

        break;

    default:
        break;
    }
}