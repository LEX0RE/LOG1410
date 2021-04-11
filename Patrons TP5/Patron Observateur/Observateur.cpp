
#include <list>
#include <memory>
#include "Observateur.hpp"
using namespace std;


void Observable::Abonner(Observateur* obs) {
	ListeObservateurs_.push_back(make_unique<Observateur>(*obs));
}

void Observable::Desabonner(Observateur* obs) {
	for (auto& observateur : ListeObservateurs_) {
		if ((observateur.get()) == obs)
			ListeObservateurs_.remove(observateur);
	}
}

void Observable::Notifier() {
	for (auto& observateur : ListeObservateurs_)
		observateur->notification();
}


