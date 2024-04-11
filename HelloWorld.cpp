#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
 /*
 The  #include <iostream>  directive tells the preprocessor to include the iostream standard file. The  int main()  function is the entry point of the program. The  std::cout  object is used to print the text to the console. The  std::endl  is used to insert a newline character. 
 To compile the program, you can use the following command: 
 g++ HelloWorld.cpp -o HelloWorld
 
 The  -o HelloWorld  option tells the compiler to output the executable file as  HelloWorld . 
 To run the program, you can use the following command: 
 ./HelloWorld
 
 The output will be: 
 Hello, World!
 
 That’s it! You have successfully compiled and run your first C++ program. 
*/