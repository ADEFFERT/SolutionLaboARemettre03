// But : Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom. 
//L�utilisateur a un maximum de 5 chances. 
//Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et 100 
//et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un nombre.
//D�fi: Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition que l'utilisateur a faite.

// Auteur : Arnaud DEFFERT
// Date  : 2020-10-05

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur.
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	//declaration des valeurs
	int nb;
	int compteur;
	int nbChance = 5;

	cout << "Entrer un nombre entre 0 et 100 : "; //demande un chiffre entre 0 et 100 � l'utilisateur
	cin >> nb;

	if (nb<0)  //condition si le chiffre est negatif erreur 
	{
		cout << "Le nombre n'est pas compris entre 0 et 100";
	}
	
	if (nb >= 0 && nb <= 100) // si le chiffre est compris entre 0 et 100
	{
		

		if (nb==iRandom) // si le nombre choisi est egale au chiffre random
		{
			cout << "Vous avez gagn� le nombre �tait bien : " << nb << endl; // affiche vous avez gagn�
		}
		else // sinon
		{
			for (compteur = 0; compteur < nbChance; compteur+1) // entre dans la boucle lui indiquant combien il lui reste de chance
			{
				
					cout << "Perdu !! Essayez encore : " << endl;
					cout << "Il vous reste " << nbChance-- << " chances" << endl; // affiche le nombre de chance restante
					cout << "Entrer votre nombre : " << endl;
					cin >> nb;
			}

		}

	}




	return 0;
}



/*

Plan de test

nombre			resultat				

100				soit gagne le nombre est bien 100 ou perdu essayez encore reste chance X
-100			ce nombre n'est pas compris entre 0 et 100			
50				soit gagne le nombre est bien 100 ou perdu essayez encore reste chance X
0				soit gagne le nombre est bien 100 ou perdu essayez encore reste chance X



*/


		




