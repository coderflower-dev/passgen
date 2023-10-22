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
  //starts up random machine
  srand(time(NULL));
  //main loop
  for(int i = 0; i<length; i++)
  {
  uint8_t choice = rand() % 10;
    //this generates a random letter
  if(choice <= 5)
  {
     //Random letter

     char letter;
     letter = 'a' + rand() % 26;
    //checks if it is a letter
     if(isalpha(letter))
     {
       //adds letter to password
       pass += letter;
     }
  }
    //generates random number
  if(choice >= 6)
  {
    //Random number
    int number;
    number = rand() % 100;
    //checks if number
    if(isdigit(char(number)))
     {
       //adds number to password
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
  //generates the password
  generate();
  std::cout << "============" << std::endl;
  return 0;
}
