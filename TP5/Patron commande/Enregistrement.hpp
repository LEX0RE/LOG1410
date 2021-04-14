#pragma once

#include "catch.hpp"

/**
  * Apr�s avoir pass� dans les classes Boutons et Commande, nous arrivons finalement � la ligne d'arriv�e qui 
    qui est la classe Enregistrement. C'est sur les instances de cette classe que les commandes seront ex�cut�es.
	En effet, les m�thodes dans la classe Commande ne sont pas celles qui vont impl�menter les commandes, mais 
	plut�t celles de la classe Enregistrement. Ainsi, la classe Commande envoie les commandes et la classe 
	Enregistrement les re�oit. Chaque m�thode de la Classe Enregistrement retourne une string qui nous permettra 
	de tester si les commandes ont bien �t� ex�cut�es. 

*/
class Enregistrement {
public:
	Enregistrement() = default;					
	std::string commenceEnregistrement() const;	// m�thode qui re�oit et ex�cute la commande disant de commencer l'enregistrement 
	std::string afficherPartition() const;		// m�thode qui re�oit et ex�cute la commande disant d'afficher la partition 
	std::string envoyer() const;					// m�thode qui re�oit et ex�cute la commande disant d'envoyer l'enregistrement
	std::string retour() const;					// m�thode qui re�oit et ex�cute la commande disant de retourner en arri�re, � partir de la derni�re commande
};