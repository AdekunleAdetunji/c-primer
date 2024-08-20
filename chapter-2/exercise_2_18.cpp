#include <iostream>

/*
main - change the value a pointer points to
return: 0
*/
int main()
{
    int i = 0, *p = &i;

    std::cout << "Acesss through variable i is: " << i << std::endl;
    
    *p = 3;
    std::cout << "Access of i through pointer is: " << *p << std::endl;
    
    int &ir = i;
    std::cout << "Access of i through reference is: " << ir << std::endl;

    ir = 4;
    std::cout << "Direct refrence of i is: " << i << std::endl;

    const int &r = 0;
    std::cout << "Access of i through reference is: " << r << std::endl;
}