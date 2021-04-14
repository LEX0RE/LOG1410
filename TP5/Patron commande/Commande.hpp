#pragma once
#include "Enregistrement.hpp"
#include "catch.hpp"
#include <memory>

/**
  *
  * La classe Commande est une interface qui permet de personnaliser la m�thode "executer" dans les classes d�riv�es d�crivant des commandes
    plus sp�cifiques. Son constructeur a comme param�tre un shared pointer d'enregistrement, car celui-ci peut �tre remplac� plus facilement, 
	puisque nous n'aurons pas � nous pr�occuper de la gestion de la m�moire. C'est sur cet enregistrement que seront ex�cut�es les commandes. 
	Toutes les classes d�riv�es de la classe Commande ont un constructeur qui leur permet de se lier � une instance d'enregistrement sur 
	laquelle elles pourront agir. Ainsi, lors de la cr�ation d'une commande, nous mettons un shared_ptr pointant vers une instance de la 
	classe Enregistrement dans l'attribut "enregistrement_" de la classe Commande. 
*/

class Commande {
public:
	Commande(std::shared_ptr<Enregistrement> enregistrement);
	virtual std::string retour() const = 0;						// m�thode virtuelle permettant de revenir � l'�tape pr�c�dente (donc retour en arri�re � partir de la derni�re commande)
	virtual std::string executer() const = 0;					// m�thode virtuelle qui finira par appeler les m�thodes se trouvant dans la classe Enregistrement afin d'ex�cuter les 
																// commandes sur notre objet Enregistrement. 
protected:
	Enregistrement enregistrement_;								// attribut sur lequel seront appel�es les m�thodes de la classe Enregistrement
};

class CommandeEnregistrer : public Commande{
public:
	CommandeEnregistrer(const std::shared_ptr<Enregistrement> enregistrement);
	std::string executer() const;
	std::string retour() const;
};

class CommandeAfficherPartition : public Commande {
public:
	CommandeAfficherPartition(const std::shared_ptr<Enregistrement> enregistrement);
	std::string executer() const;
	std::string retour() const;
};

class CommandeEnvoyer : public Commande {
public:
	CommandeEnvoyer(const std::shared_ptr<Enregistrement> enregistrement);
	std::string executer() const;
	std::string retour() const;
};

class CommandeRetour : public Commande {
public:
	CommandeRetour(const std::shared_ptr<Enregistrement> enregistrement);
	std::string executer() const;
	std::string retour() const;
};