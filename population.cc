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
  do {
    cout << "Quelle année (> 2011 ?) ";
    cin >> annee;
  } while (annee <= annee_depart);
  
  population = population * exp((annee - annee_depart) * (taux / 100));
  
  cout << "Population en " << annee << " : " << population << endl;
  
  // ===== PARTIE 2 =====
  cout << endl << "====---- PARTIE 2 ----====" << endl;
    
  double cible(0.0);
    
  do {
    cout << "Combien de milliards (> " << population_initiale << ") ? ";
    cin >> cible;
  } while ( cible <= population_initiale);
  
  population = population_initiale;
  
  for (int i(annee_depart + 1); population <= cible ; ++i) {
    population = population_initiale * exp((i - annee_depart) * (taux / 100));
    cout << "Population en " << i << " : " << population << endl;
  }


  // ===== PARTIE 3 =====
  cout << endl << "====---- PARTIE 3 ----====" << endl;
    
  population = population_initiale;
  annee = annee_depart;
  double population_init(population);
  double population_double(population_initiale * 2.0);
    
  for (int i(annee + 1); population <= cible; ++i) {
    population = population_init * exp((i - annee) * (taux / 100));
    if (population >= population_double) {
      annee = i;
      population_init = population;
      population_double *= 2;
      taux = taux /2.0;
    }
      
    cout << "Population en " << i << " : " << population << " ; " << "taux de croissance : " << taux << " %" << endl;

  }


  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
