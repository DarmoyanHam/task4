#include <iostream>

int main()
{
    int a = 5;
    int* ptr_a = &a;
    int& ref_a = a;

    std::cout << a << std::endl;

    (*ptr_a)++;
    
    std::cout << a << std::endl;

    ref_a = 15;

    std::cout << a << std::endl;

    return 0;
}