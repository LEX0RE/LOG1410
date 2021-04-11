#pragma once
#include "SymboleDeMusique.hpp"

class FabriqueDeSymboles {
public:
	virtual SymboleDeMusique* creerSymbole() = 0;
};

class CreateurBlanche : public FabriqueDeSymboles {
public:
	SymboleDeMusique* creerSymbole();
};

class CreateurNoire : public FabriqueDeSymboles {
public:
	SymboleDeMusique* creerSymbole();
};

class CreateurCroche : public FabriqueDeSymboles {
public:
	SymboleDeMusique* creerSymbole();
};
