// But : Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. 
//       Les représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. 
//       Par exemple, un représentant qui vend pour 5000 $ de produits chimiques en une semaine, 
//       perçoit un salaire de 250 $ plus 7.5 % de 5000$, soit un total de 625 $.
//       Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant 
//       et qui calcule et affiche son salaire.
//		Entrez - 1 à la valeur des ventes pour quitter le programme.

// Auteur : Arnaud DEFFERT
// Date : 2020-10-05

#include <iostream>
using namespace std;  // Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");


		// Déclarations des constantes
	const int SALAIRE_SEMAINE = 250;
	

		// Déclarations des variables
	// numéro de la semaine du mois
	int ventes;// au départ on ne connait pas le chiffres des ventes, donc celui-ci est égal à zéro 
	float commission =0; // au depart on ne connait pas le montant de la commission, elle est égale à zéro
	float salaireTotal; // salaire de la semaine + la comission 
	int semaine=4;
	int compteur;
	int salaireMensuel;
	// condition de la boucle
	for (compteur = 0; compteur < semaine; compteur++)
	{
		cout << "entrer le chiffre de la semaine" << endl;
		cin >> ventes;

		// Calculer la commission
		commission = (ventes * 7.5) / 100;
		cout << commission << endl;

		//  on cumul salaire total est egale au salaire semaine plus la commssion
		salaireTotal = SALAIRE_SEMAINE + commission;
		cout << salaireTotal << endl;;

		//cumul du salaire des 4 semaines

	
		
	}
	




	
			
		

	


}

/*
Plan test

salaire semaine					commission					salaire total
1000+1000+1000+1000			4000*7.5/100= 300		
1000+0+1000+(-1000)
-1
0
*/


