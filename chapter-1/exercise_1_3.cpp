#include <iostream>

int main()
{
    int v_1 = 0, v_2 = 0;
    
    std::cout << "Enter two numbers seperated by a space" << std::endl;
    std::cin >> v_1 >> v_2;
    std::cout << "The product of the two values are: " << v_1 * v_2
        << std::endl;

    return 0;
}