// But : Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. 
//       Les repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. 
//       Par exemple, un repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, 
//       per�oit un salaire de 250 $ plus 7.5 % de 5000$, soit un total de 625 $.
//       D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant 
//       et qui calcule et affiche son salaire.
//		Entrez - 1 � la valeur des ventes pour quitter le programme.

// Auteur : Arnaud DEFFERT
// Date : 2020-10-05

#include <iostream>
using namespace std;  // Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");


		// D�clarations des constantes
	const int SALAIRE_SEMAINE = 250;
	

		// D�clarations des variables
	// num�ro de la semaine du mois
	int ventes;// au d�part on ne connait pas le chiffres des ventes, donc celui-ci est �gal � z�ro 
	float commission =0; // au depart on ne connait pas le montant de la commission, elle est �gale � z�ro
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


