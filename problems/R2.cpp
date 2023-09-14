// https://open.kattis.com/problems/r2

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string input;

  getline(cin, input);

  istringstream iss(input);
  int r1, s;

  iss >> r1 >> s;

  cout << (2 * s) - r1;

  return 0;
}