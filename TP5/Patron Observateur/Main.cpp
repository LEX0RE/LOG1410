
#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "Observateur.hpp"
#include "DroitDauteur.hpp"
#include "ChampTexte.hpp"


TEST_CASE("Observateur interface", "[interface]") {
   
    std::shared_ptr<DroitDauteur> DD1 = std::make_shared<DroitDauteur>(DroitDauteur());     // initialisation des objets de type DroitDauteur, donc indirectement des Observateurs
    std::shared_ptr<DroitDauteur> DD2 = std::make_shared<DroitDauteur>(DroitDauteur());
    std::shared_ptr<DroitDauteur> DD3 = std::make_shared<DroitDauteur>(DroitDauteur());
    std::shared_ptr<ChampTexte> CT = std::make_shared<ChampTexte>(ChampTexte());            // initialisation des objets de type ChampTexte, donc indirectement des Observables
    CT->abonner(DD1.get());
    CT->abonner(DD2.get());
    CT->notifier();

    REQUIRE(DD1->edition == 1);
    REQUIRE(DD2->edition == 1);
    REQUIRE(DD3->edition == 0);

    CT->desabonner(DD1.get());
    CT->abonner(DD3.get());
    CT->notifier();

    REQUIRE(DD1->edition == 1);
    REQUIRE(DD2->edition == 2);
    REQUIRE(DD3->edition == 1);

}
