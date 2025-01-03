#include <iostream>
#include <string>

int main(){

    std::cout << "Hello World !!" << std::endl;
    std::cout << "C++ 20 Version In use" << std::endl;

    std::cout << "What is your name ?" << std::endl;

    std::string name;
    std::getline(std::cin, name);

    int age;
    std::cout << "What is your age?" << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << ", you are " << age << " years old !!" << std::endl;

    return 0;
}