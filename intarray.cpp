/*
Problem 1(intarray.cpp):Write a program that will read up to ten nonnegative integers into an array called numberArray
and then write/print the integers back to the screen(console output). For this exercise you need not use any functions.
*/

#include <iostream>
using namespace std;

int main() {
  int numberArray[10];
  unsigned int i;
  bool j;

  cout << "Enter 10 non-negative integers you would like to add into the array: " << endl;


  for (i = 0; i < 10; ++i) {
    while (j = true) { // Ensures integer inputs are all non-negative numbers
      cout << "Integer " << i+1 << " in numberArray: ";
      cin >> numberArray[i];
      cout << endl;
      if (numberArray[i] >= 0){ // if value is a negative number, enter again. If value is a positive number, exit out of the while loop and continue the for loop.
        break;
      }
    }
  }

  for (i = 0; i < 10; ++i) {
    cout << "Integer " << i+1 << " in numberArray is " << numberArray[i] << endl;
  }

  return 0;
}
