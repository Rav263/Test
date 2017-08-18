#include <iostream>
#include <string>

int main(){
  std::cout << "Hello world!" << std::endl;
  std::cout << "Please enter your name: ";

  std::string name;
  std::cin >> name;

  std::cout << "Hello, " << name << std::endl;

  std::cout << "How are you?" << std::endl;
}
