#include <iostream>
#include <iomanip> // pour setprecision()
#include <cmath>   // pour exp()
using namespace std;

int main()
{
  // réduire le format d'affichage
  cout << setprecision(4);

  constexpr double population_initiale(7.0); // population initiale, en milliard d'humains
  constexpr int    annee_depart(2011);       // année initiale
  double taux(1.2);                          // taux de croissance, en %

  int annee(annee_depart);                // année de calcul
  double population(population_initiale); // population mondiale pour l'année 'annee'

  cout << "====---- PARTIE 1 ----====" << endl;
  cout << "Population en " << annee << " : " << population
       << endl;

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/

  // ===== PARTIE 1 =====


  // ===== PARTIE 2 =====
  cout << endl << "====---- PARTIE 2 ----====" << endl;


  // ===== PARTIE 3 =====
  cout << endl << "====---- PARTIE 3 ----====" << endl;


  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
