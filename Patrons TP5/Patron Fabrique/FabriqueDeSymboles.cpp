
#include "FabriqueDeSymboles.hpp"

std::unique_ptr<SymboleDeMusique> CreateurBlanche::creerSymbole() {
	return std::make_unique<Blanche>(Blanche());
}

std::unique_ptr<SymboleDeMusique> CreateurNoire::creerSymbole() {
	return std::make_unique<Noire>(Noire());
}

std::unique_ptr<SymboleDeMusique> CreateurCroche::creerSymbole() {
	return std::make_unique<Croche>(Croche());
}