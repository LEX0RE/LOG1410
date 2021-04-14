#pragma once
#include "Enregistrement.hpp"
#include "catch.hpp"
#include <memory>

/**
  *
  * La classe Commande est une interface qui permet de personnaliser la méthode "executer" dans les classes dérivées décrivant des commandes
    plus spécifiques. Son constructeur a comme paramètre un shared pointer d'enregistrement, car celui-ci peut être remplacé plus facilement, 
	puisque nous n'aurons pas à nous préoccuper de la gestion de la mémoire. C'est sur cet enregistrement que seront exécutées les commandes. 
	Toutes les classes dérivées de la classe Commande ont un constructeur qui leur permet de se lier à une instance d'enregistrement sur 
	laquelle elles pourront agir. Ainsi, lors de la création d'une commande, nous mettons un shared_ptr pointant vers une instance de la 
	classe Enregistrement dans l'attribut "enregistrement_" de la classe Commande. 
*/

class Commande {
public:
	Commande(std::shared_ptr<Enregistrement> enregistrement);
	virtual std::string retour() = 0;							// méthode virtuelle permettant de revenir à l'étape précédente (donc retour en arrière à partir de la dernière commande)
	virtual std::string executer() = 0;							// méthode virtuelle qui finira par appeler les méthodes se trouvant dans la classe Enregistrement afin d'exécuter les 
																// commandes sur notre objet Enregistrement. 
protected:
	Enregistrement enregistrement_;								// attribut sur lequel seront appelées les méthodes de la classe Enregistrement
};

class CommandeEnregistrer : public Commande{
public:
	CommandeEnregistrer(std::shared_ptr<Enregistrement> enregistrement);
	std::string executer();
	std::string retour();
};

class CommandeAfficherPartition : public Commande {
public:
	CommandeAfficherPartition(std::shared_ptr<Enregistrement> enregistrement);
	std::string executer();
	std::string retour();
};

class CommandeEnvoyer : public Commande {
public:
	CommandeEnvoyer(std::shared_ptr<Enregistrement> enregistrement);
	std::string executer();
	std::string retour();
};

class CommandeRetour : public Commande {
public:
	CommandeRetour(std::shared_ptr<Enregistrement> enregistrement);
	std::string executer();
	std::string retour();
};