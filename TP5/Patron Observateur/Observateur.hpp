#pragma once
#include <list>
#include <memory>

/**
  * 
  * Observateur est une interface de laquelle h�ritent tous les autres observateurs. Elle contient une m�thode virtuelle qui pourra �tre
    personnalis�e par toutes ses sous-classes, afin de cr�er des notifications plus sp�cifiques � leurs t�ches. Par exemple, la classe 
	DroitDauteur h�rite de la classe Observateur et impl�mente sa propre m�thode notification, qui va incr�menter un entier lorsqu'une
	modification sera observ�e au niveau des droits d'auteur.
  
*/
class Observateur { 
public:
	virtual void notification() = 0;		//m�thode virtuelle qui sera impl�ment�e dans les sous-classes 
											//ne peut pas �tre instanci�e : on cr�e des pointers pointant vers des objets appartenant � ses sous classes
};											 

/**
  *
  * Si Observateur est celui qui observe, la classe Observable repr�sente celui qui est observ�. En effet, toutes les classes observ�es 
    sont d�riv�es de la classe Observable. En g�n�ral, lorsqu'une modification sera faite, soit lorsque l'une des m�thodes se trouvant 
	dans la classe observ�e sera appel�e sur l'un de ces objets, les objets appartenant � la classe qui l'observe seront notifi�s, 
	apportant alors des changements plus profonds. 
	Dans notre cas, la classe ChampTexte h�rite de la classe Observable. Les objets de type ChampTexte peuvent alors appeler les m�thodes 
	de sa classe m�re, qui repr�sentent les actions directes que peuvent faire les utilisateurs. De plus, Observable a un attribut permettant
	de regrouper les Observateurs � notifier, soit les DroitDauteur, dans une liste de pointers pointant vers ces derniers.
	L'utilisateur pourrait d�cider d'ajouter un droit d'auteur � la liste gr�ce � la m�thode "abonner", ou d'en enlever un � partir de la 
	m�thdoe "desabonner". Ainsi, si l'on enl�ve des pointers Observateurs de la liste, ils ne seront plus notifi�s. 
	
*/
class Observable {
public: 
	void abonner(Observateur* obs);			//ajoute un pointer d'Observateur � ListeObservateurs_
	void desabonner(const Observateur* obs);		//enl�ve un pointer d'Observateur de la ListeObservateurs_
	void notifier();						//notifie les Observateurs se trouvant dans ListeObservateurs_

private:
	std::list<Observateur*> ListeObservateurs_;
};