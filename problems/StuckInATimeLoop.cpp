// https://open.kattis.com/problems/timeloop

#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int numSpell;
  cin >> numSpell;

  ostringstream oss;

  for (int i = 1; i <= numSpell; i++) {
    oss << i << " Abracadabra";

    cout << oss.str() << endl;
    oss.str("");
  }

  return 0;
}