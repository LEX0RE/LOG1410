#pragma once
#include "SymboleDeMusique.hpp"
#include <memory>

/**
  * La classe FabriqueDeSymboles et litt�ralement la fabrique des symboles de musiques d�crit dans les classes d�riv�es 
    de SymbolesDeMusique. Ainsi, c'est une interface qui d�clare la m�thode virtuelle "creerSymbole", qui retourne un 
	pointer vers un objet SymboleDeMusique. Celle-ci sera personalis�e dans les classes d�riv�es, qui sont sp�cifiques
	� la cr�ation d'un certain type de symbole. 
    
*/
class FabriqueDeSymboles {
public:
	virtual std::unique_ptr<SymboleDeMusique> creerSymbole() const= 0;
};

class CreateurBlanche : public FabriqueDeSymboles {
public:
	std::unique_ptr<SymboleDeMusique> creerSymbole() const override;
};

class CreateurNoire : public FabriqueDeSymboles {
public:
	std::unique_ptr<SymboleDeMusique> creerSymbole() const override;
};

class CreateurCroche : public FabriqueDeSymboles {
public:
	std::unique_ptr<SymboleDeMusique> creerSymbole() const override;
};
