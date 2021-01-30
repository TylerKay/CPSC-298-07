/*
Problem 3(salestax.cpp):Implement a function called addTax.
The function addTax has two formal parameters: taxRate(float),
which is the amount of sales tax expressed as a percent; and cost(float), which is the cost of an item before tax.
The function returns the value(float) of cost so that it includes sales tax.
*/

#include <iostream>
using namespace std;

double addTax(double taxRate, double cost) {
  double salesTax;
  double totalWithTax;

  taxRate /= 100; // Convert to taxRate to a decimal
  salesTax = taxRate * cost;
  totalWithTax = salesTax + cost;

  return totalWithTax;
}


int main() {
  double cost;
  double taxRate;
  double total;

  cout << "Enter the cost of the item before tax: ";
  cin >> cost;
  cout << endl;

  cout << "Enter the sales tax (____%): ";
  cin >> taxRate;
  cout << endl;

  total = addTax(taxRate, cost);

  cout << "The total cost including sales tax is: $" << total << endl;
  return 0;
}
