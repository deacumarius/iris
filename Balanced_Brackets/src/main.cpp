#include "Balanced_Brackets.h"
#include <iostream>
#include <string>

int main() 
{
    std::string s;
    std::cout << "Input expression:" << std::endl;
    std::cin >> s;

    if (checkBracketsBalanced(s))
        std::cout << "Balanced!" << std::endl;
    else    
        std::cout << "Not balanced!" << std::endl;

    return 0;
}