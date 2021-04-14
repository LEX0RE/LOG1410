
#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "FabriqueDeSymboles.hpp"
#include "SymboleDeMusique.hpp"

/**
  * Ici, nous commençons par l'initialisation des créateurs de symboles plus spécifiques, donc d'objets appartenant aux
    classes dérivées de SymbolesDeMusique. Ceux-ci sont nécessaires afin de pouvoir appeler les méthodes personnaliées 
    dans les classes dérivées de FabriqueDeSymboles, soit "creerSymbole". C'est alors que les différentes notes de musique 
    sont créées. 
    Nous avons utilisé des unique pointers pour créer nos instances, car cela s'avère plus efficace au cas où nous 
    n'avons plus besoin de l'un de nos symboles. Ainsi, nous ne devons pas gérer la mémoire. 
    Pour ce qui concerne notre test, nous vérifions si l'instance de note créée, soit de type SymboleDeMusique, peut
    être downcast dynamiquement vers l'une des classes dérivées, comme Blanche ou Noire. 

*/
TEST_CASE("Fabrique de symboles", "[Symboles]") {

    std::unique_ptr<CreateurBlanche> blanche = std::make_unique<CreateurBlanche>(CreateurBlanche());
    std::unique_ptr<CreateurNoire> noire = std::make_unique<CreateurNoire>(CreateurNoire());
    std::unique_ptr<CreateurCroche> croche = std::make_unique<CreateurCroche>(CreateurCroche());
    std::unique_ptr<SymboleDeMusique> note1 = blanche->creerSymbole();
    std::unique_ptr<SymboleDeMusique> note2 = noire->creerSymbole();
    std::unique_ptr<SymboleDeMusique> note3 = croche->creerSymbole();

    REQUIRE(dynamic_cast<Blanche*>(note1.get()) != nullptr);
    REQUIRE(dynamic_cast<Noire*>(note2.get()) != nullptr);
    REQUIRE(dynamic_cast<Croche*>(note3.get()) != nullptr);

}
