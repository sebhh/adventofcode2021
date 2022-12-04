#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <sstream>



int main()
{
    std::string input, first_low, first_high, second_low, second_high;
    std::getline(std::cin, input);
    int sum = 0;

    while(!input.empty()){
        std::string delimiter = ",";
        std::string lower_token = input.substr(0, input.find(delimiter));
        std::string upper_token = input.substr(input.find(delimiter) + 1, input.length());
        
        //First
        first_low = lower_token.substr(0, lower_token.find("-"));
        first_high = lower_token.substr(lower_token.find("-") + 1, lower_token.length());

        //Second
        second_low = upper_token.substr(0, upper_token.find("-"));
        second_high = upper_token.substr(upper_token.find("-") + 1, upper_token.length());
        
        

        if ((atoi(first_low.c_str()) <= atoi(second_low.c_str())) && (atoi(first_high.c_str()) >= atoi(second_high.c_str()))){
            std::cout << first_low << " " << first_high << "\n";
            std::cout << second_low << " " << second_high << "\n";
            sum++;
        }
        else {if ((atoi(second_low.c_str()) <= atoi(first_low.c_str())) && (atoi(second_high.c_str()) >= atoi(first_high.c_str()))){
            std::cout << first_low << " " << first_high << "\n";
            std::cout << second_low << " " << second_high << "\n";
            sum++;
        }
        }
            
        std::getline(std::cin, input);
        
    }
    std::cout << sum << "\n";
    return 0;
}