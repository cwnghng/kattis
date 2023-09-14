// https://open.kattis.com/problems/fyi

#include <iostream>

using namespace std;

int main() {
  int phoneNumber;
  cin >> phoneNumber;

  int decider = phoneNumber - 5550000;

  if (decider >= 0 && decider <= 9999) {
    cout << 1;
  } else {
    cout << 0;
  }

  return 0;
}