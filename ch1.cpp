#include <iostream>
#include <ostream>
#include <string>

int main()
{
#if 0
  std::cout << "Please enter your first name:";
  std::string name;
  std::cin >> name;

  std::cout << "Hello," << name << "!" << std::endl;
#endif

  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  //构造输出信息
  const std::string greeting = "Hello," + name + "!";
  
  //构建输出的2、4行
  const std::string space(greeting.size(), ' ');
  const std::string second = "*" + space + "*";

  //构建输出的1、5行
  const std::string first(second.size(), '*');

  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "*" << greeting << "*" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  const std::string hello = "Hello";
  //const std::string message = ", world" + "!" + hello; 错误
  //std::cout << message << std::endl;

  return 0;
}
