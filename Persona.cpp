#include "Persona.h"
#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <cstdlib>

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
	Persona* Persona::operator + (Persona a) {
		Persona *persona3;
			string tNombre;
			char tGenero;
			int tCabello;
			int tOjos;
			int tPiel;
			bool tFertil=true;

		if(this->Genero==('M')){
			tNombre=this->Nombre;
		}else{
			tNombre=a.getNombre();
		}

		srand(time(NULL));
		int ran_genero;
		ran_genero=rand()%2;

		if(ran_genero==1){
			tGenero='H';
		}else{
			tGenero='M';
		}
		if(this->Cabello==2 && a.getCabello()==1){//negro rubio
			tCabello=2;
		} else if(this->Cabello==3 && a.getCabello()==3){//peirrojo pelirojo
			tCabello=3;
		} else if(this->Cabello==2 && a.getCabello()==3){//negro pelirojo
			tCabello=2;
		}else if(this->Cabello==1 && a.getCabello()==3){//rubio pelirrojo
			tCabello=1;
		}else if(this->Cabello==2 && a.getCabello()==2){//negro negro
			tCabello=2;
		}else if(this->Cabello==1 && a.getCabello()==1){//rubio rubio
			tCabello=1;
		}else if(this->Cabello==1 && a.getCabello()==2){//negro rubio
			tCabello=2;
		} else if(this->Cabello==3 && a.getCabello()==3){//peirrojo pelirojo
			tCabello=3;
		} else if(this->Cabello==3 && a.getCabello()==2){//negro pelirojo
			tCabello=2;
		}else if(this->Cabello==3 && a.getCabello()==1){//rubio pelirrojo
			tCabello=1;
		}else if(this->Cabello==2 && a.getCabello()==2){//negro negro
			tCabello=2;
		}else if(this->Cabello==1 && a.getCabello()==1){//rubio rubio
			tCabello=1;
		}

		int ran_ojos;
		ran_ojos=rand()%100;
			if(ran_ojos>=0 && ran_ojos<=6.25){
				tOjos=3;
			}else if(ran_ojos>6.25 && ran_ojos<=18.75){
				tOjos=2;
			}else if(ran_ojos>18.75 && ran_ojos<=100){
				tOjos=1;
			}

		if(this->Piel==1 && a.getPiel()==2){
			tPiel=3;
		}else if(this->Piel==1 && a.getPiel()==3){
			tPiel=1;
		}else if(this->Piel==2 && a.getPiel()==3){
			tPiel=3;
		}else if(this->Piel==1 && a.getPiel()==1){
			tPiel=1;
		}else if(this->Piel==2 && a.getPiel()==2){
			tPiel=2;
		}else if(this->Piel==3 && a.getPiel()==3){
			tPiel=3;
		}else if(this->Piel==2 && a.getPiel()==1){
			tPiel=3;
		}else if(this->Piel==3 && a.getPiel()==1){
			tPiel=1;
		}else if(this->Piel==3 && a.getPiel()==2){
			tPiel=3;
		}else if(this->Piel==1 && a.getPiel()==1){
			tPiel=1;
		}else if(this->Piel==2 && a.getPiel()==2){
			tPiel=2;
		}else if(this->Piel==3 && a.getPiel()==3){
			tPiel=3;
		}



		persona3=new Persona(tNombre, tGenero, tCabello, tOjos, tPiel, tFertil);
		return persona3;
	}

	Persona* Persona::operator * (Persona a) {
		Persona *persona3;
			string tNombre;
			char tGenero;
			int tCabello;
			int tOjos;
			int tPiel;
			bool tFertil=true;

		if(this->Genero==('M')){
			tNombre=this->Nombre;
		}else{
			tNombre=a.getNombre();
		}

		srand(time(NULL));
		int ran_genero;
		ran_genero=rand()%2;

		if(ran_genero==1){
			tGenero='H';
		}else{
			tGenero='M';
		}
		if(this->Cabello==2 && a.getCabello()==1){//negro rubio
			tCabello=2;
		} else if(this->Cabello==3 && a.getCabello()==3){//peirrojo pelirojo
			tCabello=3;
		} else if(this->Cabello==2 && a.getCabello()==3){//negro pelirojo
			tCabello=2;
		}else if(this->Cabello==1 && a.getCabello()==3){//rubio pelirrojo
			tCabello=1;
		}else if(this->Cabello==2 && a.getCabello()==2){//negro negro
			tCabello=2;
		}else if(this->Cabello==1 && a.getCabello()==1){//rubio rubio
			tCabello=1;
		}else if(this->Cabello==1 && a.getCabello()==2){//negro rubio
			tCabello=2;
		} else if(this->Cabello==3 && a.getCabello()==3){//peirrojo pelirojo
			tCabello=3;
		} else if(this->Cabello==3 && a.getCabello()==2){//negro pelirojo
			tCabello=2;
		}else if(this->Cabello==3 && a.getCabello()==1){//rubio pelirrojo
			tCabello=1;
		}else if(this->Cabello==2 && a.getCabello()==2){//negro negro
			tCabello=2;
		}else if(this->Cabello==1 && a.getCabello()==1){//rubio rubio
			tCabello=1;
		}

		int ran_ojos;
		ran_ojos=rand()%100;
			if(ran_ojos>=0 && ran_ojos<=6.25){
				tOjos=3;
			}else if(ran_ojos>6.25 && ran_ojos<=18.75){
				tOjos=2;
			}else if(ran_ojos>18.75 && ran_ojos<=100){
				tOjos=1;
			}

		if(this->Piel==1 && a.getPiel()==2){
			tPiel=3;
		}else if(this->Piel==1 && a.getPiel()==3){
			tPiel=1;
		}else if(this->Piel==2 && a.getPiel()==3){
			tPiel=3;
		}else if(this->Piel==1 && a.getPiel()==1){
			tPiel=1;
		}else if(this->Piel==2 && a.getPiel()==2){
			tPiel=2;
		}else if(this->Piel==3 && a.getPiel()==3){
			tPiel=3;
		}else if(this->Piel==2 && a.getPiel()==1){
			tPiel=3;
		}else if(this->Piel==3 && a.getPiel()==1){
			tPiel=1;
		}else if(this->Piel==3 && a.getPiel()==2){
			tPiel=3;
		}else if(this->Piel==1 && a.getPiel()==1){
			tPiel=1;
		}else if(this->Piel==2 && a.getPiel()==2){
			tPiel=2;
		}else if(this->Piel==3 && a.getPiel()==3){
			tPiel=3;
		}
		persona3=new Persona(tNombre, tGenero, tCabello, tOjos, tPiel, tFertil);
		return persona3;
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
