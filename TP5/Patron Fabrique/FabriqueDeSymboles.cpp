
#include "FabriqueDeSymboles.hpp"

std::unique_ptr<SymboleDeMusique> CreateurBlanche::creerSymbole() const{
	return std::make_unique<Blanche>(Blanche());
}

std::unique_ptr<SymboleDeMusique> CreateurNoire::creerSymbole() const{
	return std::make_unique<Noire>(Noire());
}

std::unique_ptr<SymboleDeMusique> CreateurCroche::creerSymbole() const{
	return std::make_unique<Croche>(Croche());
}