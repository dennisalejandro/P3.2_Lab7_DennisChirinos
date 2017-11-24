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
	Persona Persona::operator + (Persona a) {
		return a;
	}
	Persona Persona::operator * (Persona a) {
		return a;
	}
	string Persona::toString() {
		string c;
		c = "";
		c = c + "Nombre: " + getNombre() + ", ";
		c = c + "Nombre: " + getGenero() + ", ";
		switch (getCabello()) {
			case 1: {
				c = c + "Pelo: " + "Rubio" + ", ";
			} break;
			case 2: {
				c = c + "Pelo: " + "Negro" + ", ";
			} break;
			case 3: {
				c = c + "Pelo: " + "Castaño" + ", ";	
			} break;
			default: {
				c = c + "Pelo: " + "Invalido" + ", ";
			} break;
		}
		switch (getOjos()) {
			case 1: {
				c = c + "Ojos: " + "Cafe" + ", ";
			} break;
			case 2: {
				c = c + "Ojos: " + "Verde" + ", ";
			} break;
			case 3: {
				c = c + "Ojos: " + "Azul" + ", ";	
			} break;
			default: {
				c = c + "Ojos: " + "Invalido" + ", ";
			} break;
		}
		switch (getPiel()) {
			case 1: {
				c = c + "Piel: " + "Blanco" + "";
			} break;
			case 2: {
				c = c + "Piel: " + "Nigga" + "";
			} break;
			case 3: {
				c = c + "Piel: " + "Trigueño" + "";	
			} break;
			default: {
				c = c + "Piel: " + "Invalido" + "";
			} break;
		}
		return c;
	}
