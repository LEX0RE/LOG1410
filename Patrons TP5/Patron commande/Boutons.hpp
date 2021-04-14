#pragma once
#include "Commande.hpp"
#include "catch.hpp"
#include <memory>

/**
  * La classe Bontons représente les boutons sur lesquels les utilisateurs peuvent appuyer pour effectuer une commande. 
	Alors, à chaque fois que nous ajoutons une commande, nous devons ajouter un bouton qui permettra de l'exécuter. 

*/
class Boutons {
public:
	std::string executerCommande();							// permet d'executer la commande en appelant l'une des méthodes "executer" se trouvant dans la classe Commande
	void setCommande(std::shared_ptr<Commande> commande);	// permet d'associer une commande à un bouton en donnant une valeur à l'attribut "commande_"
private:
	std::shared_ptr<Commande> commande_;					// sera l'attribut dans lequel sera stocké la commande, donc avec lequel on appelera une des méthodes "executer"
};