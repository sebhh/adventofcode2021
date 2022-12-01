#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main()
{
    int top_elf = 0, top_val = 0, sum = 0, i = 0;
    while (1)
    {
        std::string input;
        std::vector<int> cals;
        std::getline(std::cin, input);
        if (input.empty())
        {
            printf("Top elf: %d\nElf calories: %d\n", top_elf, top_val);
            return 0;
        }
        
        while(!input.empty())
        {
            int number = std::stoi(input);
            cals.push_back(number);
            std::getline(std::cin, input);
        }

        int sum = std::accumulate(cals.begin(), cals.end(), 0);
        if (sum > top_val)
        {
            top_val = sum;
            top_elf = i;
        }
        i++;
        
    }
    return 0;
}