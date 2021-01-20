/*

Assignment #1, Problem 2

Write a program that determines whether a meeting room is in violation of fire law regulations regarding
the maximum room capacity. The program will read in the maximum room capacity and the number of
people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting and tells how many additional people may
legally attend. If the number of people exceeds the maximum room capacity, the program announces that
the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
in order to meet the fire regulations. */

# include <iostream>
using namespace std;

int main() {
  int maxCapacity;
  int numPeople;

  cout << "Enter the maximum capacity of the room: ";
  cin >> maxCapacity;
  cout << "Enter the number of people who attended the meeting: ";
  cin >> numPeople;

  if (numPeople <= maxCapacity) {
    cout << "It is legal to hold the meeting. " << (maxCapacity % numPeople) << " more people may attend the meeting. " << endl;
  }

  else {
    cout << "The meeting cannot be held as planned due to fire regulations. " << (numPeople % maxCapacity) << " people must be excluded in order to meet the fire regulations. " << endl;
  }
  return 0;
}
