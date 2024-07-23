#include "Single_Number.h"
#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter the number of elements:" << std::endl;
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter numbers:" << std::endl;
    for (int i = 0; i < n; ++i)
        std::cin >> nums[i];
    
    std::cout << "Single number is " << getSingleNumber(nums) << std::endl;

    return 0;
}