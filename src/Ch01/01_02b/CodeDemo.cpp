// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout << "Enter Your Name:" << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;
    return 0;
}