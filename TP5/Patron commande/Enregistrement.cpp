
#include "Enregistrement.hpp"
#include <iostream>
#include "catch.hpp"

std::string Enregistrement::commenceEnregistrement() const {
	std::cout << "La commande enregistrement a ete recue." << std::endl;
	return "Enregistrement commence.";
}

std::string Enregistrement::afficherPartition() const {
	std::cout << "La commande afficherPartition a ete recue." << std::endl;
	return "La partition affichee.";
}

std::string Enregistrement::envoyer() const {
	std::cout << "La commande envoyer a ete recue." << std::endl;
	return "L'enregistrement envoye.";
}

std::string Enregistrement::retour() const {
	std::cout << "La commande retour a ete recue." << std::endl;
	return "Retour a l'etat precedent.";
}
