
#include "Boutons.hpp"
#include "catch.hpp"

std::string Boutons::executerCommande() {
	return commande_->executer();
}

void Boutons::setCommande(std::shared_ptr<Commande> commande) {
	commande_ = commande;
}
