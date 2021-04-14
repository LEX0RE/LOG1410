
#include "Commande.hpp"
#include "catch.hpp"
#include <iostream>

Commande::Commande(std::shared_ptr<Enregistrement> enregistrement) {
	enregistrement_ = *enregistrement;
}

CommandeEnregistrer::CommandeEnregistrer(std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}

CommandeAfficherPartition::CommandeAfficherPartition(std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}

CommandeEnvoyer::CommandeEnvoyer(std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}

CommandeRetour::CommandeRetour(std::shared_ptr<Enregistrement> enregistrement) : Commande(enregistrement) {}


std::string CommandeEnregistrer::executer() {
	std::cout << "La commande enregistrement a ete lancee." << std::endl;
	return enregistrement_.commenceEnregistrement();
}

std::string CommandeEnregistrer::retour() {
	std::cout << "Retour a partir de la commande \"enregistrement\"." << std::endl;
	return "Retour a partir de la commande \"enregistrement\".";
}

std::string CommandeAfficherPartition::executer() {
	std::cout << "La commande afficherpartition a ete lancee." << std::endl;
	return enregistrement_.afficherPartition();
}

std::string CommandeAfficherPartition::retour() {
	std::cout << "Retour a partir de la commande \"afficher partition\"." << std::endl;
	return "Retour a partir de la commande \"afficher partition\".";
}

std::string CommandeEnvoyer::executer() {
	std::cout << "La commande envoyer a ete lancee." << std::endl;
	return enregistrement_.envoyer();
}

std::string CommandeEnvoyer::retour() {
	std::cout << "Retour a partir de la commande \"envoyer\"." << std::endl;
	return "Retour a partir de la commande \"envoyer\".";
}

std::string CommandeRetour::executer() {
	std::cout << "La commande retour a ete lancee." << std::endl;
	return enregistrement_.retour();
}

std::string CommandeRetour::retour() {
	std::cout << "Retour à partir de la commande \"retour\"." << std::endl;
	return "Retour à partir de la commande \"retour\".";
}