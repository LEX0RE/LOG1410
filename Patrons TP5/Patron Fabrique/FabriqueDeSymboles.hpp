#pragma once
#include "SymboleDeMusique.hpp"
#include <memory>

/**
  * La classe FabriqueDeSymboles et littéralement la fabrique des symboles de musiques décrit dans les classes dérivées 
    de SymbolesDeMusique. Ainsi, c'est une interface qui déclare la méthode virtuelle "creerSymbole", qui retourne un 
	pointer vers un objet SymboleDeMusique. Celle-ci sera personalisée dans les classes dérivées, qui sont spécifiques
	à la création d'un certain type de symbole. 
    
*/
class FabriqueDeSymboles {
public:
	virtual std::unique_ptr<SymboleDeMusique> creerSymbole() = 0;
};

class CreateurBlanche : public FabriqueDeSymboles {
public:
	std::unique_ptr<SymboleDeMusique> creerSymbole() override;
};

class CreateurNoire : public FabriqueDeSymboles {
public:
	std::unique_ptr<SymboleDeMusique> creerSymbole() override;
};

class CreateurCroche : public FabriqueDeSymboles {
public:
	std::unique_ptr<SymboleDeMusique> creerSymbole() override;
};
