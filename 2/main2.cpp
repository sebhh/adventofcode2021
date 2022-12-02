#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>


int points_for_combat(char opp, char self){
    if (opp == 'A')
    {
        if (self == 'X') {return 3;}
        if (self == 'Y') {return 1;}
        if (self == 'Z') {return 2;}
    }

    if (opp == 'B')
    {
        if (self == 'X') {return 1;}
        if (self == 'Y') {return 2;}
        if (self == 'Z') {return 3;}
    }

    if (opp == 'C')
    {
        if (self == 'X') {return 2;}
        if (self == 'Y') {return 3;}
        if (self == 'Z') {return 1;}
    }
    
}

int points_for_choice(char choice){
    if (choice == 'X')
    {
        return 0;
    }
    if (choice == 'Y')
    {
        return 3;
    }
    if (choice == 'Z')
    {
        return 6;
    }
    
}

int main() {

    std::string input;
    char opp, outcome;
    std::getline(std::cin, input);
    int points, sum = 0;

    while(!input.empty()){
        opp = input[0];
        outcome = input[2];

        points = points_for_combat(opp, outcome) + points_for_choice(outcome);
        sum += points;
        std::getline(std::cin, input);
    }

    std::cout << sum;

    return 0;
}