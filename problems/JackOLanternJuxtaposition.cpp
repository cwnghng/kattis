// https://open.kattis.com/problems/jackolanternjuxtaposition

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int numEyes, numNoses, numMouths;
  
  string input;
  getline(cin, input);

  istringstream iss(input);
  iss >> numEyes >> numNoses >> numMouths;

  cout << numEyes * numNoses * numMouths;

  return 0;
}