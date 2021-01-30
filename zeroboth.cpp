/*
Problem 2(zeroboth.cpp):Implement a void function called zeroBoth that has two call-by-reference parameters,
both of which are variables of type int, and sets the values of both variables to 0.
*/

#include <iostream>
using namespace std;

void zeroBoth(int& var1, int& var2){
}

int main() {
  int variable1 = 0;
  int variable2 = 0;

  zeroBoth(variable1, variable2);

  return 0;
}
