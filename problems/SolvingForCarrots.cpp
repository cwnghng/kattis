// https://open.kattis.com/problems/carrots

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string input;

  getline(cin, input);

  istringstream iss(input);
  int numContestant, numProblem;

  iss >> numContestant >> numProblem;

  cout << numProblem;

  return 0;
}