// Fichier pour l'exercice 10 du chapitre 6.
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Proposition d'extension pendant le cours: créer un acronyme
// jusqu'à la première voyelle.
string jusqua_voyelle(const string &s) {
  size_t end = s.find_first_of("aeiouAEIOU");
  if (end != string::npos) {
    return {s, 0, end + 1};
  }
  return s;
}

int main() {
  string prenom, nom;
  cout << "Entrez votre prenom et votre nom : ";
  cin >> prenom >> nom;
  string acronyme{prenom.front(), nom.front(), nom.back()};
  transform(acronyme.begin(), acronyme.end(), acronyme.begin(), ::toupper);

  cout << endl
       << "Votre prenom est     : " << prenom << endl
       << "Votre nom est        : " << nom << endl
       << "Votre acronyme est   : " << acronyme << endl
       << "Acronyme prononcable : " << jusqua_voyelle(prenom)
       << jusqua_voyelle(nom) << endl;

  return 0;
}