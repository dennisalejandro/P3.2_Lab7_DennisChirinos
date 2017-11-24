#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;
	Persona::Persona(string Nombre, char Genero, int Cabello, int Ojos, int Piel, bool Fertil) { 
		setNombre(Nombre);
		setGenero(Genero);
		setCabello(Cabello);
		setOjos(Ojos);
		setPiel(Piel);
		setFertil(Fertil);
	}
	void Persona::setNombre(string a) {
		this->Nombre = a;
	}
	void Persona::setGenero(char a) {
		this->Genero = a;
	}
	void Persona::setCabello(int a) {
		this->Cabello = a;
	}
	void Persona::setOjos(int a) {
		this->Ojos = a;
	}
	void Persona::setPiel(int a) {
		this->Piel = a;
	}
	void Persona::setFertil(bool a) {
		this->Fertil = a;
	}
	string Persona::getNombre() {
		return this->Nombre;
	}
	char Persona::getGenero() {
		return this->Genero;
	}
	int Persona::getCabello() {
		return this->Cabello;
	}
	int Persona::getOjos() {
		return this->Ojos;
	}
	int Persona::getPiel() {
		return this->Piel;
	}
	bool Persona::getFertil() {
		return this->Fertil;
	}
