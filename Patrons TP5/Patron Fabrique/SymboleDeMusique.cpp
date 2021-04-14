
#include "SymboleDeMusique.hpp"
#include <iostream>

Blanche::Blanche() { std::cout << "Une blanche a ete creee." << std::endl; }

Noire::Noire() { std::cout << "Une noire a ete creee." << std::endl; }

Croche::Croche() { std::cout << "Une croche a ete creee." << std::endl; }

void SymboleDeMusique::setCouleur(std::string couleur) { couleur_ = couleur; }