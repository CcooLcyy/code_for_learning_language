#include <iostream>

int main()
{
    std::cout << "please input two number: ";
    int v_1, v_2;
    std::cin >> v_1 >> v_2;
    std::cout << "The number is " << v_1
        << " and " << v_2 << "." << std::endl;
    std::cout << "sum of them is " << v_1 + v_2 << ". " 
        << std::endl;

}