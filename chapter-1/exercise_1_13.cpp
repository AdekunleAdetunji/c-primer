#include <iostream>

/*
main - use a for loop to sum values between 50 and 100
return: 0
*/
int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }

    std::cout << "Answer is: " << sum << std::endl;


    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }

    return 0;
}