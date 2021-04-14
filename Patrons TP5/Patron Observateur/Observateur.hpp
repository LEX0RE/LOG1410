#pragma once
#include <list>
#include <memory>

/**
  * 
  * Observateur est une interface de laquelle héritent tous les autres observateurs. Elle contient une méthode virtuelle qui pourra être
    personnalisée par toutes ses sous-classes, afin de créer des notifications plus spécifiques à leurs tâches. Par exemple, la classe 
	DroitDauteur hérite de la classe Observateur et implémente sa propre méthode notification, qui va incrémenter un entier lorsqu'une
	modification sera observée au niveau des droits d'auteur.
  
*/
class Observateur { 
public:
	virtual void notification() = 0;		//méthode virtuelle qui sera implémentée dans les sous-classes 
											//ne peut pas être instanciée : on crée des pointers pointant vers des objets appartenant à ses sous classes
};											 

/**
  *
  * Si Observateur est celui qui observe, la classe Observable représente celui qui est observé. En effet, toutes les classes observées 
    sont dérivées de la classe Observable. En général, lorsqu'une modification sera faite, soit lorsque l'une des méthodes se trouvant 
	dans la classe observée sera appelée sur l'un de ces objets, les objets appartenant à la classe qui l'observe seront notifiés, 
	apportant alors des changements plus profonds. 
	Dans notre cas, la classe ChampTexte hérite de la classe Observable. Les objets de type ChampTexte peuvent alors appeler les méthodes 
	de sa classe mère, qui représentent les actions directes que peuvent faire les utilisateurs. De plus, Observable a un attribut permettant
	de regrouper les Observateurs à notifier, soit les DroitDauteur, dans une liste de pointers pointant vers ces derniers.
	L'utilisateur pourrait décider d'ajouter un droit d'auteur à la liste grâce à la méthode "abonner", ou d'en enlever un à partir de la 
	méthdoe "desabonner". Ainsi, si l'on enlève des pointers Observateurs de la liste, ils ne seront plus notifiés. 
	
*/
class Observable {
public: 
	void abonner(Observateur* obs);			//ajoute un pointer d'Observateur à ListeObservateurs_
	void desabonner(Observateur* obs);		//enlève un pointer d'Observateur de la ListeObservateurs_
	void notifier();						//notifie les Observateurs se trouvant dans ListeObservateurs_

private:
	std::list<Observateur*> ListeObservateurs_;
};