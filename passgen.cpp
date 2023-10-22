//Original python code by ChatGPT, converted by Timur Gabdrakhmanov 10/22/2023
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <random>

void generate()
{
  std::string pass;
  int length = 10;
  srand(time(NULL));
  for(int i = 0; i<length; i++)
  {
  uint8_t choice = rand() % 10;
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
  std::cout << pass << std::endl;
}

int main()
{
  std::cout << "Created by Timur G." << std::endl;
  std::cout << "============" << std::endl;
  generate();
  std::cout << "============" << std::endl;
  return 0;
}
