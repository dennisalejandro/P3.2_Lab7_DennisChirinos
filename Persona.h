#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona {
	private: 
		string Nombre;
		char Genero;
		int Cabello;
		int Ojos;
		int Piel;
		bool Fertil;
	public: 
		Persona(string, char, int, int, int, bool);
		void  setNombre(string);
		void  setGenero(char);
		void  setCabello(int);
		void  setOjos(int);
		void  setPiel(int);
		void  setFertil(bool);
		string getNombre();
		char getGenero();
		int getCabello();
		int getOjos();
		int getPiel();
		bool getFertil();
};
