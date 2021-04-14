#pragma once

/**
  * La classe ServeurInfonuagique est responsable de cr�er un serveur unique. En effet, dans notre cas, il est 
    pr�f�rable d'avoir qu'un seul serveur qui va g�rer toutes les donn�es de notre application, regroup�es en fichers.
	La classe a une m�thode statique "getServeur" : elle se charge d'initialiser une instance unique de la classe
	ServeurInfonuagique, soit le serveur, en lui r�servant de l'espace en m�moire une seule fois et pour le reste de
	la dur�e de vie du programme. La m�thode est �galement publique afin de permettre � l'ensemble du programme d'acc�der 
	au singleton, donc au serveur, ou d'en cr�er un s'il n'existe pas d�j�. De plus, la classe poss�de un seul attribut, 
	qui lui aussi est statique, car il repr�sente le serveur. C'est un pointer, puisque qu'un singleton est cr�e afin de
	ne durer, donc de ne pas �tre d�truit. Ainsi, nous n'avons pas besoin de g�rer son espace m�moire.

*/
class ServeurInfonuagique {
public:
	static ServeurInfonuagique* getServeur();
private:
	ServeurInfonuagique() = default;
	static ServeurInfonuagique* serveurInfonuagique_;
};
