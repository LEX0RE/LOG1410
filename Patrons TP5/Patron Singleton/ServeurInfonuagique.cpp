
#include "ServeurInfonuagique.hpp"
#include <iostream>

ServeurInfonuagique* ServeurInfonuagique::serveurInfonuagique_ = nullptr;

ServeurInfonuagique* ServeurInfonuagique::getServeur() {
	if (serveurInfonuagique_ == nullptr) {
		serveurInfonuagique_ = new ServeurInfonuagique();
		std::cout << "Un serveur unique a ete cree." << std::endl;
	}
	else { std::cout << "Il est impossible de creer un second serveur." << std::endl; }
	return serveurInfonuagique_;
}
