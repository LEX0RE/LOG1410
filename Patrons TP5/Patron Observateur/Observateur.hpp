#pragma once
#include <list>
#include <memory>

class Observateur {
public:
	virtual void notification() = 0;
};

class Observable {
public: 
	void Abonner(Observateur* obs);
	void Desabonner(Observateur* obs);
	void Notifier();

private:
	std::list<std::unique_ptr<Observateur>> ListeObservateurs_;
};