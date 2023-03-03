#include "Mystring.h"
#include <iostream>

using namespace cs225;

int main() {
    // ctor
    std::cout << "======Testing ctors=======" << std::endl;
    Mystring str1;
    std::cout << "TEST 1: "; 
    str1.Display();   // should be ""
    std::cout << std::endl;

    Mystring str2('a', 10);   // should be aaaaaaaaaa
    std::cout << "TEST 2: "; 
    str2.Display(); 
    std::cout << std::endl;

    Mystring str3 = "Hello, World\n";
    std::cout << "TEST 3: "; 
    str3.Display();
    std::cout << std::endl;

    Mystring str4 = str3;
    std::cout << "TEST 4: ";
    str4.Display();
    std::cout << std::endl;

    std::cout << "======Testing operators======" << std::endl;
    Mystring str5 = str3 + str4;
    std::cout << "TEST 5: ";
    str5.Display();
    std::cout << std::endl;

    Mystring str6 = "Goodbye, World\n";
    std::cout << "TEST 6: ";
    str6 = str3;
    str6.Display();
    std::cout << std::endl;
    return 0;
}