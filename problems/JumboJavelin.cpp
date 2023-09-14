// https://open.kattis.com/problems/jumbojavelin

#include <iostream>

using namespace std;

int main() {
  int numRods;
  cin >> numRods;

  int javelinLength;
  cin >> javelinLength;

  for (int i = 1; i < numRods; i++) {
    int rodLength;
    cin >> rodLength;

    javelinLength += rodLength - 1;
  }

  cout << javelinLength;

  return 0;
}