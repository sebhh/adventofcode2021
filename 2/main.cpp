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
        if (self == 'Y') {return 6;}
        if (self == 'Z') {return 0;}
    }

    if (opp == 'B')
    {
        if (self == 'X') {return 0;}
        if (self == 'Y') {return 3;}
        if (self == 'Z') {return 6;}
    }

    if (opp == 'C')
    {
        if (self == 'X') {return 6;}
        if (self == 'Y') {return 0;}
        if (self == 'Z') {return 3;}
    }
    
}

int points_for_choice(char choice){
    if (choice == 'X')
    {
        return 1;
    }
    if (choice == 'Y')
    {
        return 2;
    }
    if (choice == 'Z')
    {
        return 3;
    }
    
}

int main() {

    std::string input;
    char opp, self;
    std::getline(std::cin, input);
    int points, sum = 0;

    while(!input.empty()){
        opp = input[0];
        self = input[2];

        points = points_for_combat(opp, self) + points_for_choice(self);
        sum += points;
        std::getline(std::cin, input);
    }

    std::cout << sum;

    return 0;
}