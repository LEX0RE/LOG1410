
#include "Boutons.hpp"
#include "catch.hpp"

std::string Boutons::executerCommande() const {
	return commande_->executer();
}

void Boutons::setCommande(const std::shared_ptr<Commande> commande) {
	commande_ = commande;
}
