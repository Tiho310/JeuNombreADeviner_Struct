/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code des fonctions du jeu
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
// Rôle : Crée un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
// Paramètres d'entrée :un_nom
// Paramètres de sortie :&joueurAcreer

void InitJoueur(TJoueur &joueurAcreer, string un_nom)
{
    joueurAcreer.nom = un_nom;
    joueurAcreer.nbPartiesJouees = 0;
    joueurAcreer.nbTentatives = 0;
    joueurAcreer.nbPartiesGagnees = 0;
}

// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

int TirerNombreMystere()
{
    int rand();
    int nombreADeviner;
    nombreADeviner = rand()%11;
        return nombreADeviner;
}


// Nom :JouerPartie
// Rôle : Fait jouer une partie au joueur passé en paramètre
//        A la fin, met à jour les informations du joueur
// Paramètres d'entrée:nombreADeviner
// Paramètres de sortie:
// Paramètres d'entrée/sortie :&un_joueur

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
        cout << "Tu as perdu le nombre à deviner était : " << nombreADeviner << endl;
    }
    nbEssais = cpt;
    gagne = etat;


}


// Nom : MajResultatsJoueur
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée:gagne, nbEssais
// Paramètres de sortie:
// Paramètres d'entrée/sortie :&joueur

void MajResultatsJoueur(TJoueur joueur, int nbEssais, bool gagne)
{

}

// Nom : ResultatsJoueur
// Rôle : indique les résultats du joueur passé en paramètre
//        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations à l'écran
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

