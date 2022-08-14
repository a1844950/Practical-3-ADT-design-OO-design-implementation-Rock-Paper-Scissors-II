#include <string>
#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer(){
}

Computer::Computer(string name2)
{
   name = name2;
}

Computer::~Computer(){
}

string Computer::getName()
{
   return name;
}

void Computer::setCtr(int ctr)
{
  
}

void Computer::addAnswer(string ans)
{
  
}

string Computer::performMove()
{
   return "";
}

