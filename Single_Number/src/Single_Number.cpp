#include "Single_Number.h"

int getSingleNumber(const std::vector<int>& nums)
{
    int single = 0;
    for (int n:nums)
        single ^= n;
    
    return single;
}