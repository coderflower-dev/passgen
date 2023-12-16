//Original python code by ChatGPT, converted by Timur Gabdrakhmanov 10/22/2023
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <random>
#include <fstream>
#include <ctime>

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
  //so it appends
  savetxt.open("passwords.txt", std::ios::app);

  //command line arguments
  //code from geeksforgeeks.org
  //I was testing things out so in the binary it says "by Timur HG".
  std::cout << "Created by Timur G." << std::endl;
  std::cout << "============" << std::endl;
  std::string password = generate(10);
  std::cout << password << std::endl;
  std::cout << "============" << std::endl;
  std::string purpose = argv[1];
  savetxt << purpose << ": " << password << "\n";
  savetxt.close();    
  return 0;
}
