
#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "FabriqueDeSymboles.hpp"
#include "SymboleDeMusique.hpp"

/**
  * Ici, nous commen�ons par l'initialisation des cr�ateurs de symboles plus sp�cifiques, donc d'objets appartenant aux
    classes d�riv�es de SymbolesDeMusique. Ceux-ci sont n�cessaires afin de pouvoir appeler les m�thodes personnali�es 
    dans les classes d�riv�es de FabriqueDeSymboles, soit "creerSymbole". C'est alors que les diff�rentes notes de musique 
    sont cr��es. 
    Nous avons utilis� des unique pointers pour cr�er nos instances, car cela s'av�re plus efficace au cas o� nous 
    n'avons plus besoin de l'un de nos symboles. Ainsi, nous ne devons pas g�rer la m�moire. 
    Pour ce qui concerne notre test, nous v�rifions si l'instance de note cr��e, soit de type SymboleDeMusique, peut
    �tre downcast dynamiquement vers l'une des classes d�riv�es, comme Blanche ou Noire. 

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
