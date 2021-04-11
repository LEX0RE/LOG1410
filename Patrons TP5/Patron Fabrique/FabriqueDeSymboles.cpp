
#include "FabriqueDeSymboles.hpp"

SymboleDeMusique* CreateurBlanche::creerSymbole() {
	return new Blanche();
}

SymboleDeMusique* CreateurNoire::creerSymbole() {
	return new Noire();
}

SymboleDeMusique* CreateurCroche::creerSymbole() {
	return new Croche();
}