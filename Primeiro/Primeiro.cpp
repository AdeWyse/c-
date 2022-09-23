// Primeiro.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
    int age{}, born{}, now{};
    std::cout << "Hello What year where you born? What year is now? \n";
    std::cin >> born >> now;
    age = now - born;
    std::cout << "Your age is " << age << ". Bye!\n";
    return 0;
}



