#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <unordered_set>

int main()
{

    std::map<char, int> my_map = {
    { 'a', 1 },
    { 'b', 2 },
    { 'c', 3 },
    { 'd', 4 },
    { 'e', 5 },
    { 'f', 6 },
    { 'g', 7 },
    { 'h', 8 },
    { 'i', 9 },
    { 'j', 10 },
    { 'k', 11 },
    { 'l', 12 },
    { 'm', 13 },
    { 'n', 14 },
    { 'o', 15 },
    { 'p', 16 },
    { 'q', 17 },
    { 'r', 18 },
    { 's', 19 },
    { 't', 20 },
    { 'u', 21 },
    { 'v', 22 },
    { 'w', 23 },
    { 'x', 24 },
    { 'y', 25 },
    { 'z', 26 },
    { 'A', 27 },
    { 'B', 28 },
    { 'C', 29 },
    { 'D', 30 },
    { 'E', 31 },
    { 'F', 32 },
    { 'G', 33 },
    { 'H', 34 },
    { 'I', 35 },
    { 'J', 36 },
    { 'K', 37 },
    { 'L', 38 },
    { 'M', 39 },
    { 'N', 40 },
    { 'O', 41 },
    { 'P', 42 },
    { 'Q', 43 },
    { 'R', 44 },
    { 'S', 45 },
    { 'T', 46 },
    { 'U', 47 },
    { 'V', 48 },
    { 'W', 49 },
    { 'X', 50 },
    { 'Y', 51 },
    { 'Z', 52 },
    };
    std::string input;
    int sum = 0, len;
    std::getline(std::cin, input);
    std::unordered_set<char> seen;
    
    while (!input.empty())
    {
        len = input.length();
        std::unordered_set<char> seen;
        for (int i = 0; i < len/2; i++)
        {
            for (int j = len/2; j < len; j++)
            {
                
                if (input[i] == input[j])
                {
                    
                    ///std::cout << input[i];
                    if (seen.find(input[i]) == seen.end())
                    {
                        seen.insert(input[i]);
                        sum += my_map[input[i]];
                    }

                }
            }
            
        }

        std::getline(std::cin, input);
        
    }
    std::cout << sum << '\n';
    return 0;
}