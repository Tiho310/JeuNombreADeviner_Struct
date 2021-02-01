/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 25/01/2021
// R�le du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
/*************************************************/
#include <iostream>
#include <ctime>
using namespace std;
#include "../include/JeuNombreAdeviner.h"

// Nom :InitJoueur
// R�le : Cr�e un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagn�es et de parties jou�es seront � 0.
// Param�tres d'entr�e :un_nom
// Param�tres de sortie :&joueurAcreer

void InitJoueur(TJoueur &joueurAcreer, string un_nom)
{
    joueurAcreer.nom = un_nom;
    joueurAcreer.nbPartiesJouees = 0;
    joueurAcreer.nbTentatives = 0;
    joueurAcreer.nbPartiesGagnees = 0;
}

// Nom :TirerNombreMystere
// R�le : Tire al�atoirement un nombre � deviner entre 0 et 10
// Valeur de retour : nombre � deviner

int TirerNombreMystere()
{
    int rand();
    int nombreADeviner;
    nombreADeviner = rand()%11;
        return nombreADeviner;
}


// Nom :JouerPartie
// R�le : Fait jouer une partie au joueur pass� en param�tre
//        A la fin, met � jour les informations du joueur
// Param�tres d'entr�e:nombreADeviner
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :&un_joueur

void JouerPartie(TJoueur& un_joueur, int nombreADeviner)
{
    int cpt;
    bool gagne;
    bool etat = false;
    cpt = 0;
    int nbEssais;
    int nombresSaisies;
    cout << "Entrez un nombre entre 0 et 10 : " << endl;
    while (cpt != 4 && nombresSaisies != nombreADeviner)
    {
        cin >> nombresSaisies ;
        if(nombresSaisies > nombreADeviner)
        {

            cout << "C'est moins : " << endl;
            cpt++;
        }
        else if (nombresSaisies < nombreADeviner)
        {
            cout << "C'est plus : " << endl;
            cpt++;
        }
        if(nombresSaisies == nombreADeviner)
        {
            cout << "Tu est trop fort : " << endl;
            cpt++;
            nbEssais = cpt;
            etat = true;
            gagne = etat;

        }

    }
    if (cpt == 4 && nombresSaisies != nombresSaisies)
    {
        cout << "Tu as perdu le nombre � deviner �tait : " << nombreADeviner << endl;
    }
    nbEssais = cpt;
    gagne = etat;


}


// Nom : MajResultatsJoueur
// R�le : met � jour les informations du joueur pass� en param�tre
// Param�tres d'entr�e:gagne, nbEssais
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :&joueur

void MajResultatsJoueur(TJoueur joueur, int nbEssais, bool gagne)
{

}

// Nom : ResultatsJoueur
// R�le : indique les r�sultats du joueur pass� en param�tre
//        le nombre de parties gagn�es, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations � l'�cran
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// R�le : retourne le nom du joueur
// Param�tres d'entr�e: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

