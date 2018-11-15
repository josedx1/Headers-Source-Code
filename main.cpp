//
//  main.cpp
//  JR- Headers & source code files projects
//
//  Created by Jose Rodriguez on 11/15/18.
//  Professor Tony Hilton
//

#include <iostream>
#include <string>
#include "Guest Input & story line.h" // Including the header file

using namespace std;


int main() // main Funtion
{
    cout << "********* Welcome to The Story Maker.**********\n\n";// display introduction
    cout << "Answer the following questions to help create your story.\n;"; // rule of the game
    // creating question or instruction of how to play the game, getting user input
    string name = GettextFromUser ("Please enter your name: ");
    string superHero = GettextFromUser ("Please enter your superhero name: ");
    int number = GetNumberFromUser ("Please enter a number: ");
    string arm = GettextFromUser ("Please enter right or left : ");
    string Friend = GettextFromUser ("please enter one of your friends name: ");
    string color = GettextFromUser ("Enter a color: ");
    string villain = GettextFromUser ("Enter a name of a villain: ");
    string power = GettextFromUser ("Enter your power: ");
    tellStory(name, superHero, number, arm,Friend, color, villain, power); // calling tellStory Function
    storyMoral(); // calling tellStory Function
    
    return 0; // Returning main funtion
    
}

