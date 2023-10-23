//Original python code by ChatGPT, converted by Timur Gabdrakhmanov 10/22/2023
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <random>
#include <fstream>

std::string generate(int length = 20)
{
  std::string pass;
  srand(time(NULL));
  for(int i = 0; i<length; i++)
  {
  uint8_t choice = rand() % length;
  if(choice <= 5)
  {
     //Random letter

     char letter;
     letter = 'a' + rand() % 26;
     if(isalpha(letter))
     {
       pass += letter;
     }
  }
  if(choice >= 6)
  {
    //Random number
    int number;
    number = rand() % 100;
    if(isdigit(char(number)))
     {
       pass += number;
     }
  }
  }
  return pass;
}

int main(int argc, char *argv[])
{
  std::ofstream savetxt;
  savetxt.open("passwords.txt");

  //command line arguments
  //code from geeksforgeeks.org

  std::cout << "Created by Timur HG." << std::endl;
  std::cout << "============" << std::endl;
  std::string password = generate(10);
  std::cout << password << std::endl;
  std::cout << "============" << std::endl;
  std::string purpose = argv[1];
  savetxt << purpose << ": " << password << "\n";
  savetxt.close();    
  return 0;
}
