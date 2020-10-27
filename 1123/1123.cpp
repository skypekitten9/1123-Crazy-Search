
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    size_t caseAmount = 0;
    std::cin >> caseAmount;
    std::vector<int> results;

    int subStringSize = 0;
    std::string input = " ";
    std::string temp = " ";
    for (size_t i = 0; i < caseAmount; i++)
    {
        std::map<std::string, int> map;
        std::getline(std::cin, temp);
        std::cin >> subStringSize;
        std::cin >> temp;
        std::cin >> input;

        std::string subString = " ";
        for (int i = 0; i < input.length(); i++)
        {
            if (i + subStringSize > input.length()) break;

            subString = input.substr(i, subStringSize);
            if (map.find(subString) == map.end()) {
                map[subString] = 0;
            }
        }
        results.push_back(map.size());
    }

    for (int i = 0; i < results.size(); i++)
    {
        std::cout << results.at(i);
        if (i != input.length()) std::cout << std::endl;
        if (i != input.length()) std::cout << std::endl;
    }
}