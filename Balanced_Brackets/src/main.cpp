#include "Balanced_Brackets.h"
#include <iostream>
#include <string>

int main() 
{
    std::string s;
    std::cin >> s;

    if (checkBracketsBalanced(s))
        std::cout << "Balanced!" << std::endl;
    else    
        std::cout << "Not balanced!" << std::endl;

    return 0;
}