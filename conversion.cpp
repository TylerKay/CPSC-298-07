/*
Problem 4(conversion.cpp):Write a program that will read in a length in feet and inches and output the equivalent length in meters and centimeters.
Use at least three functions:
  -one for user input,
  -one or more for calculating,
  -and one for output(console).

Include a loop that lets the user repeat this computation for new input values until the user says he or she wants to
end the program(user has to type exit).There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/

#include <iostream>
#include <string>
using namespace std;

int meters_Calc(int numFeet, int numInches) {
  int meters;
  double inchToFeet;

  inchToFeet = numInches / 12;
  meters = (inchToFeet + numFeet) * 0.3048; // foot to meters.

  return meters;

}

double centimeters_Calc(int numFeet, double numInches, int numMeters) {
  double centimeters;
  double inchToFeet;

  inchToFeet = numInches / 12;
  centimeters = ((inchToFeet + numFeet) * 0.3048) * 100; // foot to meters.
  centimeters = centimeters - 100 * numMeters;

  return centimeters;
}

void output(int meters, double centimeters) {
  cout << "In meters and centimeters, this converts to " << meters << " meters and " << centimeters << " centimeters" << endl;
}

int main() {
    double feet;
    double inches;
    double meters;
    double centimeters;
    string exit;
  while (exit != "exit") {
    cout << "Enter the length in feet and inches. " << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << endl;
    cout << "Inches: ";
    cin >> inches;
    cout << endl;

    meters = meters_Calc(feet, inches);
    centimeters = centimeters_Calc(feet, inches, meters);

    output(meters, centimeters);
    cout << "Would you like to run the program again? Type 'exit' to end the program or type any key to continue. " << endl;
    cin >> exit;
    if (exit == "exit") {
      break;
    }
    else {
      exit.clear(); //Prvent infinite loop from occuring.
    }
  }
  return 0;
}
