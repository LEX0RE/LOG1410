
#include <list>
#include <iostream>
#include "Observateur.hpp"
using namespace std;


void Observable::abonner(Observateur* obs) {
	ListeObservateurs_.push_back(obs);
	std::cout << "Un observateur s'est abonne." << std::endl;
}

void Observable::desabonner(Observateur* obs) {
	Observateur* aEnlever = nullptr;
	for (auto observateur : ListeObservateurs_) {
		if (observateur == obs)
			aEnlever = observateur;
	}
	ListeObservateurs_.remove(aEnlever);
	std::cout << "Un observateur s'est desabonne." << std::endl;
}

void Observable::notifier() {
	for (auto& observateur : ListeObservateurs_)
		observateur->notification();
	std::cout << "Un observateur a ete notifie." << std::endl;
}


