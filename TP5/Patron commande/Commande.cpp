
#include "Commande.hpp"
#include "catch.hpp"
#include <iostream>

Commande::Commande(std::shared_ptr<Enregistrement> enregistrement) {
	enregistrement_ = *enregistrement;
}

CommandeEnregistrer::CommandeEnregistrer(const std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}

CommandeAfficherPartition::CommandeAfficherPartition(const std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}

CommandeEnvoyer::CommandeEnvoyer(const std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}

CommandeRetour::CommandeRetour(const std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}


std::string CommandeEnregistrer::executer() const  {
	std::cout << "La commande enregistrement a ete lancee." << std::endl;
	return enregistrement_.commenceEnregistrement();
}

std::string CommandeEnregistrer::retour() const {
	std::cout << "Retour a partir de la commande \"enregistrement\"." << std::endl;
	return "Retour a partir de la commande \"enregistrement\".";
}

std::string CommandeAfficherPartition::executer() const {
	std::cout << "La commande afficherpartition a ete lancee." << std::endl;
	return enregistrement_.afficherPartition();
}

std::string CommandeAfficherPartition::retour() const {
	std::cout << "Retour a partir de la commande \"afficher partition\"." << std::endl;
	return "Retour a partir de la commande \"afficher partition\".";
}

std::string CommandeEnvoyer::executer() const {
	std::cout << "La commande envoyer a ete lancee." << std::endl;
	return enregistrement_.envoyer();
}

std::string CommandeEnvoyer::retour() const {
	std::cout << "Retour a partir de la commande \"envoyer\"." << std::endl;
	return "Retour a partir de la commande \"envoyer\".";
}

std::string CommandeRetour::executer() const {
	std::cout << "La commande retour a ete lancee." << std::endl;
	return enregistrement_.retour();
}

std::string CommandeRetour::retour() const {
	std::cout << "Retour � partir de la commande \"retour\"." << std::endl;
	return "Retour � partir de la commande \"retour\".";
}