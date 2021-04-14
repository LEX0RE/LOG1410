#pragma once
#include <string>

/**
  * La classe SymboleDeMusique est celle qui englobe les caract�ristiques des divers types de symboles de musique que 
    devra cr�er la classe FabriqueDeSymboles. Par exemple, elle peut d�cider de la couleur des notes de musique : vert si
	correctement jou�e et rouge si une erreur s'est produite. Ainsi, cette classe est polymorphique, car elle contient la
	m�thode "setCouleur", qui permet de donner une couleur � notre symbole de musique, en l'assignant � l'attribut "couleur_".
	Les classes d�riv�es de la classe SymbolesDeMusique sont les notes de musique plus sp�cifiques, comme Blanche, Noire et
	Croche. Des classes peuvent �tre facilement ajout�es si de nouveaux symboles ou des modifications � des symboles existants
	sont n�cessaires. 
*/

class SymboleDeMusique {
	std::string couleur_;
	virtual void setCouleur(const std::string couleur);
};

class Blanche : public SymboleDeMusique {
public:
	Blanche();
	void setCouleur();
};
class Noire : public SymboleDeMusique {
public:
	Noire();
	void setCouleur();
};
class Croche : public SymboleDeMusique {
public:
	Croche();
	void setCouleur();
};