
#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "ServeurInfonuagique.hpp"

/**
  * Pour tester notre singleton, nous créons un serveur, soit une instance unique de la classe ServeurInfonuagique.
    Ensuite, nous essayong d'en créer un autre, puis vérifions que le résultat obtenu est le serveur crée précédement. 

*/
TEST_CASE("Singleton serveur infonuagique", "[serveur infonuagique]") {

    ServeurInfonuagique* serveur = ServeurInfonuagique::getServeur();

    ServeurInfonuagique* serveur2 = ServeurInfonuagique::getServeur();

    REQUIRE(serveur != nullptr);
    REQUIRE(serveur2 == serveur);

}
