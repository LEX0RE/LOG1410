#pragma once
#include <string>

class SymboleDeMusique {
	std::string couleur_;
};

class Blanche : public SymboleDeMusique {
public:
	Blanche();
};
class Noire : public SymboleDeMusique {
public:
	Noire();
};
class Croche : public SymboleDeMusique {
public:
	Croche();
};