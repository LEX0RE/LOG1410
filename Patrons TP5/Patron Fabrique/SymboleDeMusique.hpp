#pragma once
#include <string>

/**
  * La classe SymboleDeMusique est celle qui englobe les caractéristiques des divers types de symboles de musique que 
    devra créer la classe FabriqueDeSymboles. Par exemple, elle peut décider de la couleur des notes de musique : vert si
	correctement jouée et rouge si une erreur s'est produite. Ainsi, cette classe est polymorphique, car elle contient la
	méthode "setCouleur", qui permet de donner une couleur à notre symbole de musique, en l'assignant à l'attribut "couleur_".
	Les classes dérivées de la classe SymbolesDeMusique sont les notes de musique plus spécifiques, comme Blanche, Noire et
	Croche. Des classes peuvent être facilement ajoutées si de nouveaux symboles ou des modifications à des symboles existants
	sont nécessaires. 
*/

class SymboleDeMusique {
	std::string couleur_;
	virtual void setCouleur(std::string couleur);
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