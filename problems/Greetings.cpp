// https://open.kattis.com/problems/greetings2

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string input;
  cin >> input;

  int numEs = input.length() - 2;

  ostringstream oss;
  oss << "h";
  while (numEs > 0) {
    numEs -= 1;
    oss << "ee";
  }

  oss << "y";
  cout << oss.str();

  return 0;
}