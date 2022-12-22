#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;

  cout << "Entrez votre prenom et votre nom : ";
  getline(cin, s);

  size_t posPremiereLettrePrenom = s.find_first_not_of(" \t");
  size_t posPremierBlancApresPrenom =
      s.find_first_of(" \t", posPremiereLettrePrenom);
  size_t posPremiereLettreNom =
      s.find_first_not_of(" \t", posPremierBlancApresPrenom);
  size_t posDerniereLettreNom = s.find_last_not_of(" \t");

  string prenom =
      s.substr(posPremiereLettrePrenom,
               posPremierBlancApresPrenom - posPremiereLettrePrenom);
  string nom = s.substr(posPremiereLettreNom,
                        posDerniereLettreNom - posPremiereLettreNom + 1);

  string acronyme{prenom.front(), nom.front(), nom.back()};
  transform(acronyme.begin(), acronyme.end(), acronyme.begin(), ::toupper);

  cout << endl
       << "Votre prenom est   : " << prenom << endl
       << "Votre nom est      : " << nom << endl
       << "Votre acronyme est : " << acronyme << endl;
  return EXIT_SUCCESS;
}