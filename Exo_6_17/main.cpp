#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int n;
  cout << "Entrez un nombre entier >= 0 : "; cin >> n;

  stringstream ss;
  ss << "(" << n << ")10"
     << " = (" << oct << n << ")8"
     << " = (" << uppercase << hex << n << ")16";
  cout << endl << ss.str() << endl;

  return EXIT_SUCCESS;
}