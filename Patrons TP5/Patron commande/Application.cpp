
#define CATCH_CONFIG_MAIN
#include "Boutons.hpp"
#include "Commande.hpp"
#include "catch.hpp"

/**
  * Le fichier Application repr�sente notre application, qui contient des boutons pouvant effectuer des commandes.
	Les instances des toutes nos classes, soit Boutons, Commande et Enregistrement sont des shared_ptr, car ils
	sont plus faciles � manipuler sans s'inqui�te de la gestion de la m�moire. 
    Ainsi, nous commen�ons par cr�er des boutons, qui seront associ�s � une instance des classes d�riv�es de la 
	classe Commande. Donc chaque instance de la Classe bouton a une fonctionnalit� sp�cifique, qui sera � son 
	tour associ�e � une instance de la classe Enregistrement.
	Par la suite, des m�thdodes seront ex�cut�es en cha�ne � travers nos classes afin d'aboutir � l'ex�cution 
	des commandes dans la classe Enregistrement. 

*/
TEST_CASE("Test sur les commandes", "[Commandes]") {

	std::shared_ptr<Boutons> Enregistrer = std::make_shared<Boutons>(Boutons());
	std::shared_ptr<Boutons> AfficherPartition = std::make_shared<Boutons>(Boutons());
	std::shared_ptr<Boutons> Envoyer = std::make_shared<Boutons>(Boutons());
	std::shared_ptr<Boutons> Retour = std::make_shared<Boutons>(Boutons());
	std::shared_ptr<Enregistrement> enregistrement = std::make_shared<Enregistrement>(Enregistrement());

	Enregistrer->setCommande(std::make_shared<CommandeEnregistrer>(CommandeEnregistrer(enregistrement)));
	AfficherPartition->setCommande(std::make_shared<CommandeAfficherPartition>(CommandeAfficherPartition(enregistrement)));
	Envoyer->setCommande(std::make_shared<CommandeEnvoyer>(CommandeEnvoyer(enregistrement)));
	Retour->setCommande(std::make_shared<CommandeRetour>(CommandeRetour(enregistrement)));

	std::string messageEnregistrer = Enregistrer->executerCommande();
	std::string messageRetour1 = Retour->executerCommande();
	std::string messageAfficherPartition = AfficherPartition->executerCommande();
	std::string messageRetour2 = Retour->executerCommande();
	std::string messageEnvoyer = Envoyer->executerCommande();
	std::string messageRetour3 = Retour->executerCommande();

	REQUIRE(messageEnregistrer == "Enregistrement commence.");
	REQUIRE(messageRetour1 == "Retour a l'etat precedent.");
	REQUIRE(messageAfficherPartition == "La partition affichee.");
	REQUIRE(messageRetour2 == "Retour a l'etat precedent.");
	REQUIRE(messageEnvoyer == "L'enregistrement envoye.");
	REQUIRE(messageRetour3 == "Retour a l'etat precedent.");

}
