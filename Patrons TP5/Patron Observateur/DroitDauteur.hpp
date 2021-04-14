#pragma once

#include "Observateur.hpp"

class DroitDauteur : public Observateur {
public:
	void notification();		// incrémente l'attribut "edition" de chaque Observateur dans la liste "ListeObservateurs_" lorsqu'il y a un changement 
	int edition = 0;
};
