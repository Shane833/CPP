#include <iostream>

int main()
{
    /* Forgetting the "" around the string literal
      std::cout << Hello there! << std::endl;
      Error Message : 2.cpp:5:18: error: 'Hello' was not declared in this scope; did you mean 'ftello'?
      |     std::cout << Hello there! << std::endl;
      |                  ^~~~~
      |                  ftello
    */

    /* Forgetting a << output opertor at the end
      std::cout << "Hello there!" std::endl;
      Error : 2.cpp:13:32: error: expected ';' before 'std'
      |     std::cout << "Hello there!" std::endl;
      |                                ^~~~
      |                                ; 
    */

    /* Forgetting the semi-colon after endl
      std::cout << "Hello there!" << std::endl:
      2.cpp:22:45: error: expected ';' before ':' token
      |     std::cout << "Hello there!" << std::endl:
      |                                             ^
      |                                             ;
    */  
    return 0;
}