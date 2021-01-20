/*

Assignment #1, Problem 3

An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
$10 per week is withheld for medical insurance. Write a program that will read in the number of hours
worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week.
*/

# include <iostream>
using namespace std;

int main() {
  int paidRate = 16;
  double overtimeRate = (16 * 1.5);
  double socialSecurityRate = 0.06;
  double federalIncomeRate = 0.14;
  double stateIncomeTax = 0.05;
  int workHoursPerWeek;
  double grossPay;
  double netPayPerWeek;
  double withholdingAmount;

  cout << "Enter in the number of hours worked in a week: " << endl;
  cin >> workHoursPerWeek;

  if (workHoursPerWeek > 40) {
    grossPay = overtimeRate * workHoursPerWeek;
    withholdingAmount = grossPay * (socialSecurityRate + federalIncomeRate + stateIncomeTax);
    netPayPerWeek = grossPay - withholdingAmount;
    cout << "Worker's Gross Pay: $" << grossPay << endl;
    cout << "Withholding Amount: $" << withholdingAmount << endl;
    cout << "Net take-home Pay: $"  << netPayPerWeek << endl;
  }

  if (workHoursPerWeek <= 40) {
    grossPay = paidRate * workHoursPerWeek;
    withholdingAmount = grossPay * (socialSecurityRate + federalIncomeRate + stateIncomeTax);
    netPayPerWeek = grossPay - withholdingAmount;
    cout << "Worker's Gross Pay: $" << grossPay << endl;
    cout << "Withholding Amount: $" << withholdingAmount << endl;
    cout << "Net take-home Pay: $"  << netPayPerWeek << endl;
  }

  return 0;
}
