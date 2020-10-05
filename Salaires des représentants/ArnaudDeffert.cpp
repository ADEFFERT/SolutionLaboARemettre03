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
	
	int ventes=0;// au départ on ne connait pas le chiffres des ventes, donc celui-ci est égal à zéro 
	float commission =0; // au depart on ne connait pas le montant de la commission, elle est égale à zéro
	float salaireTotal; // salaire de la semaine + la comission 
	


	cout << "entrer le chiffre des ventes de la semaine ou taper -1 pour sortir : ";// on demande à l'utilisateur d'entrer son chiffre ou de taper -1 pour sortir
	cin >> ventes;
	
	while (ventes != -1) // tant que le chiffre des ventes n'est pas égale à -1 on redemande le chiffre
	{
		if (ventes < 0)//  condition si le chiffre des ventes est strictement inferieur à 0
		{
			cout << "Erreur les ventes de la semaine ne peuvent pas être negative " << endl; // on indique à l'utilisateur que le chiffre ne peut pas être negatif
			cout << "entrer le chiffre des ventes de la semaine ou taper -1 pour sortir : "; // on redemande à l'utilsateur de donner son chiffre
			cin >> ventes;
		}
		else // si non
		{

		
			// Calculer la commission
			commission = (ventes * 7.5) / 100;
			cout << "Votre Commission est de :  " << commission << endl;

			//  on cumul salaire total est egale au salaire semaine plus la commssion
			salaireTotal = SALAIRE_SEMAINE + commission;
			cout << "Votre Salaire de cette semaine :   " << salaireTotal << endl;

			// fin de boucle
			ventes = ventes++;
			cout << "entrer le chiffre de la semaine ou taper - 1 pour sortir : "; // on redemande le ciffre de la semaine ou -1 pour sortir
			cin >> ventes;
		}
	}
	
		
		return 0; // fin de programme sortie
		
		

}




	
			
	

	




/*
Plan test

salaire semaine					commission					salaire total
1000						1000*7.5/100= 75					250+75=325
-1000						erreur le chiffre ne peut pas être négatif
-1							sortie du programme
0								0*7.5/100 = 0					250+0=250
*/


