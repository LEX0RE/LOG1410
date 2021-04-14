#pragma once
#include "Commande.hpp"
#include "catch.hpp"
#include <memory>

/**
  * La classe Bontons repr�sente les boutons sur lesquels les utilisateurs peuvent appuyer pour effectuer une commande. 
	Alors, � chaque fois que nous ajoutons une commande, nous devons ajouter un bouton qui permettra de l'ex�cuter. 

*/
class Boutons {
public:
	std::string executerCommande() const;							// permet d'executer la commande en appelant l'une des m�thodes "executer" se trouvant dans la classe Commande
	void setCommande(const std::shared_ptr<Commande> commande);	// permet d'associer une commande � un bouton en donnant une valeur � l'attribut "commande_"
private:
	std::shared_ptr<Commande> commande_;					// sera l'attribut dans lequel sera stock� la commande, donc avec lequel on appelera une des m�thodes "executer"
};