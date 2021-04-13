//Converts english into whale
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string input = "turpentine and turtles";
    std::vector < char > vowels = { 'a', 'e', 'i', 'o', 'u' };
    std::vector < char > result = {};

    for (int i = 0; i < input.length(); i++) {
        for (int k = 0; k < vowels.size(); k++) {
            if (input[i] == vowels[k]) {
                result.push_back(input[i]);
                break;
            }
        }
        if (input[i] == 'u' || input[i] == 'e') {
            result.push_back(input[i]);
        }
    }

    for (int j = 0; j<result.size(); j++)
    {
        std::cout << result[j];
    }
    
}
