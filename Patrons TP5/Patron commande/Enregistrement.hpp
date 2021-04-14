#pragma once

#include "catch.hpp"

/**
  * Après avoir passé dans les classes Boutons et Commande, nous arrivons finalement à la ligne d'arrivée qui 
    qui est la classe Enregistrement. C'est sur les instances de cette classe que les commandes seront exécutées.
	En effet, les méthodes dans la classe Commande ne sont pas celles qui vont implémenter les commandes, mais 
	plutôt celles de la classe Enregistrement. Ainsi, la classe Commande envoie les commandes et la classe 
	Enregistrement les reçoit. Chaque méthode de la Classe Enregistrement retourne une string qui nous permettra 
	de tester si les commandes ont bien été exécutées. 

*/
class Enregistrement {
public:
	Enregistrement() = default;					
	std::string commenceEnregistrement();	// méthode qui reçoit et exécute la commande disant de commencer l'enregistrement 
	std::string afficherPartition();		// méthode qui reçoit et exécute la commande disant d'afficher la partition 
	std::string envoyer();					// méthode qui reçoit et exécute la commande disant d'envoyer l'enregistrement
	std::string retour();					// méthode qui reçoit et exécute la commande disant de retourner en arrière, à partir de la dernière commande
};