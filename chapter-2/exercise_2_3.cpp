#include <iostream>

/*
main - check the output of arithmetic exppressions
return: 0
*/

int main()
{
    unsigned u1 = 10, u2 = 43;
    std::cout << u1 + u2 << std::endl;
    std::cout << u1 - u2 << std::endl;


    /*int i = 10, i1=43;
    std::cout << i + i1 << std::endl;
    std::cout << i - i1 << std::endl;

    std::cout << i - u2 << std::endl;
    std::cout << u2 - i << std::endl;*/

    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;

}