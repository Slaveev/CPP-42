#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the string using strPTR: " << strPTR << std::endl;
    std::cout << "Address of the string using strREF: " << &strREF << std::endl;
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value of str using strPTR: " << *strPTR << std::endl;
    std::cout << "Value of str using strREF: " << strREF << std::endl;
    return (0);
}