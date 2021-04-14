#pragma once

/**
  * La classe ServeurInfonuagique est responsable de créer un serveur unique. En effet, dans notre cas, il est 
    préférable d'avoir qu'un seul serveur qui va gérer toutes les données de notre application, regroupées en fichers.
	La classe a une méthode statique "getServeur" : elle se charge d'initialiser une instance unique de la classe
	ServeurInfonuagique, soit le serveur, en lui réservant de l'espace en mémoire une seule fois et pour le reste de
	la durée de vie du programme. La méthode est également publique afin de permettre à l'ensemble du programme d'accéder 
	au singleton, donc au serveur, ou d'en créer un s'il n'existe pas déjà. De plus, la classe possède un seul attribut, 
	qui lui aussi est statique, car il représente le serveur. C'est un pointer, puisque qu'un singleton est crée afin de
	ne durer, donc de ne pas être détruit. Ainsi, nous n'avons pas besoin de gérer son espace mémoire.

*/
class ServeurInfonuagique {
public:
	static ServeurInfonuagique* getServeur();
private:
	ServeurInfonuagique() = default;
	static ServeurInfonuagique* serveurInfonuagique_;
};
