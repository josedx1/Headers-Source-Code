//
//  Guest input & story line.cpp
//  JR- Headers & source code files projects
//
//  Created by Jose Rodriguez on 11/15/18.
//  Professor Tony Hilton
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string GettextFromUser (string prompt) // function that take a string as the promt and return as a string
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
    
}

int GetNumberFromUser (string prompt) // function that take a number as the prompt and return it as an interge
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory (string name, string superHero, int number, string arm, string Friend, string color, string villain, string power) // tellStory function with strings and interge
// display story
{
    cout << "\nHere's your Story:\n";
    cout << "Once upon a time there was a kid name ";
    cout << name << "\n";
    cout << name << " was exposed to a radioactive liquid, " ;
    cout << " during a explosion in his science class\n ";
    cout << "Now\n during hard times in the city, he becomes the superhero \n";
    cout << superHero << "\n";
    cout << superHero <<" costume is in " << color << " color\n ";
    cout << " when one day, the ";
    cout << superHero;
    cout << " was fighting a villain called ";
    cout << villain;
    cout << "\nSurrounded by ";
    cout << number;
    cout << " " << villain<< "'s army\n ";
    cout << superHero << " has to use the most devasting power of " << power << " to destroy the enemy ";
    cout << " but it came with a cost, because  " << superHero << " lost the ";
    cout << arm << " arm.\n";
    cout << "for the first time our Superhero " << superHero << " lost the inspiration to be a hero ";
    cout << " until a friend called " << Friend << " make a robotic arm for " << superHero << "\n" ;
    cout << superHero << " became again the hero that the city need it. \n";
    cout << " Thanks to the best friend " << Friend << "\n" ;
    cout << name << ". ";
    
    
}

void storyMoral() // creating storymoral function
{
    cout << " Press Enter to know the story moral: " << endl; //
    string enter; // pausing the program
    getline(cin, enter);
    getline(cin, enter);
    cout << " No matter if you hit rock botton there is always a friend who give you a hand.\n ";
    cout << " **************Thank you for playing***************";
}


