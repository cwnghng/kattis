#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
  float qaly;
  qaly = 0;

  int numPeriods;
  cin >> numPeriods;
  cin.ignore();

  string input;

  for (int i = 0; i < numPeriods; i++) {
    getline(cin, input);

    float qualityOfLife, numYears;

    istringstream iss(input);
    iss >> qualityOfLife >> numYears;

    qaly += qualityOfLife * numYears;
  }

  cout << fixed << setprecision(3) << qaly;

  return 0;
}