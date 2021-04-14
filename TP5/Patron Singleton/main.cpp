
#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "ServeurInfonuagique.hpp"

/**
  * Pour tester notre singleton, nous cr�ons un serveur, soit une instance unique de la classe ServeurInfonuagique.
    Ensuite, nous essayong d'en cr�er un autre, puis v�rifions que le r�sultat obtenu est le serveur cr�e pr�c�dement. 

*/
TEST_CASE("Singleton serveur infonuagique", "[serveur infonuagique]") {

    ServeurInfonuagique* serveur = ServeurInfonuagique::getServeur();

    ServeurInfonuagique* serveur2 = ServeurInfonuagique::getServeur();

    REQUIRE(serveur != nullptr);
    REQUIRE(serveur2 == serveur);

}
