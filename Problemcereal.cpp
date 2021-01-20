/*

Assignment #1, Problem 1

A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
to yield one metric ton of cereal. */

#include <iostream>
using namespace std;

int main() {

  double metricTon = 35273.92;
  double cerealWeightInOunces;
  double cerealWeightInMetricTons;
  int numBoxes;

  cout << "Enter weight of package of cereal in ounces: ";
  cin >> cerealWeightInOunces;

  cerealWeightInMetricTons = cerealWeightInOunces / metricTon;
  numBoxes = cerealWeightInOunces / metricTon;

  cout << "Cereal weight in Metric Tons: " << cerealWeightInMetricTons << endl;
  cout << "Number of boxes needed: " << numBoxes << endl;
  return 0;
}
