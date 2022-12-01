#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
    std::vector<int> top_vals;
    for (int i = 0; i < 3; i++)
    {
        top_vals.push_back(0);
    }
    
    while (1)
    {
        std::string input;
        std::vector<int> cals;
        std::getline(std::cin, input);
        if (input.empty())
        {
            int final = std::accumulate(top_vals.begin(), top_vals.end(), 0);
            printf("Top 3 calories: %d\n", final);
            return 0;
        }
        
        while(!input.empty())
        {
            int number = std::stoi(input);
            cals.push_back(number);
            std::getline(std::cin, input);
        }

        int sum = std::accumulate(cals.begin(), cals.end(), 0);
        std::vector<int>::iterator res = std::min_element(top_vals.begin(), top_vals.end());
        int index = std::distance(top_vals.begin(), res);
        int cur_min = top_vals[index];
        if (sum > cur_min)
        {
            top_vals[index] = sum;
        }
    }
    return 0;
}