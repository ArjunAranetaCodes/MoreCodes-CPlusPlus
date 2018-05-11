//Problem 5: Write a program that converts an array/list to string.
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>

int main()
{
    int arrNumbers[] = {1,2,3,4};

    std::copy(arrNumbers, arrNumbers+4, std::ostream_iterator<int>(std::cout,","));
    
    return 0;
}
