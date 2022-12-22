// Fichier pour l'exercice 4 du chapitre 6.
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void ex_4a() {
  const char SYMBOLE_1 = ' ';
  const char SYMBOLE_2 = '*';
  const string LIGNE_1 = string(3, SYMBOLE_1) + string(1, SYMBOLE_2);
  const string LIGNE_2 = string(2, SYMBOLE_1) + string(3, SYMBOLE_2);
  const string LIGNE_3 = string(1, SYMBOLE_1) + string(5, SYMBOLE_2);
  const string LIGNE_4 = string(7, SYMBOLE_2);

  const string DESSIN = LIGNE_1 + '\n' + LIGNE_2 + '\n' + LIGNE_3 + '\n' +
                        LIGNE_4 + '\n' + LIGNE_3 + '\n' + LIGNE_2 + '\n' +
                        LIGNE_1;
  cout << DESSIN << endl;
}

void ex_4b() {
  for (int i = -6; i <= 6; i += 2) {
    auto s = size_t(abs(i));
    cout << string(s / 2, ' ') << string(7 - s, '*') << endl;
    // Ou alors:
    // cout << setw(int(7 - s / 2)) << string(7 - s, '*') << endl;
  }
}

int main() {
  cout << "Exercice 4:" << endl;
  ex_4a();
  cout << endl << "Exercice 4 avec for:" << endl;
  ex_4b();
  return 0;
}