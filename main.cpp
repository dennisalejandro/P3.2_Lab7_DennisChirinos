#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include <exception>
using namespace std;
void Listar(vector<Persona*>*);
int main() {
	vector<Persona*>* vList = new vector<Persona*>;
	int op = 0;
	while (op!=5) {
		cout << "Ingrese una opcion\n";
		cout << "1) Agregar persona \n";
		cout << "2) Eliminar persona \n";
		cout << "3) Listar persona \n";
		cout << "4) Simular... persona  :v \n";
		cout << "\n";
		cin >> op;
		switch (op) {
			case 1: {
				string Nombre;
				char Genero;
				int Cabello;
				int Ojos;
				int Piel;
				bool Fertil = false;
				cout << "Ingrese Nombre \n";
				cin >> Nombre;
				cout << "Ingrese Genero (M/F/O) \n";
				cin >> Genero;
				cout << "Ingrese color de Cabello \n";
				cout << "(Rubio 1:, Negro: 2, Castaño: 3) \n";
				cin >> Cabello;
				cout << "Ingrese color de Ojos \n";
				cout << "(Cafe 1:, Verde: 2, Azul: 3) \n";
				cin >> Ojos;
				cout << "Ingrese color de Piel \n";
				cout << "(Blanco 1:, Negro: 2, Trigueño: 3) \n";
				cin >> Piel;
				cout << "Ingrese (s) si es Fertil, ingrese otra cosa si no\n";
				char c;
				cin >> c;
				if ((c == 's')||(c=='S')) {
					Fertil = true;
				}
				Persona* p = new Persona(Nombre, Genero, Cabello, Ojos, Piel, Fertil);
				vList->push_back(p);
			} break;
			case 2: {
				try {
					cout << "Ingrese Cual Persona borrar \n";
					Listar(vList);
					int opDel;
					cin >> opDel;
					delete vList->at(opDel);
					vList->erase(vList->begin() + opDel);
				} catch (exception e) {
					cout << "Error, ingrese un numero correcto \n";
				}
			} break;
			case 3: {
				Listar(vList);
				cout << "\n";
			} break;
			case 4: {
				int opD;
				cout << "Con Preservativo o sin preservativo \n";
				cout << "1) Con Preservativo\n";
				cout << "2) Sin Preservativo\n";
				cin >> opD;
				cout << "Usar que personas? (Persona 1 el macho, Persona 2 la femina)\n";
				int P1op;
				int P2op;
				Listar(vList);
				cin >> P1op;
				cin >> P2op;
				Persona P1 = *vList->at(P1op);
				Persona P2 = *vList->at(P2op);
				if ((P1.getGenero()!=P2.getGenero())&&(P1.getFertil())&&(P2.getFertil())) {
					switch (opD) {
						case 1: {
							int TieneHijos = rand() % 28;
							int SeRompio = rand() % 100;
							if ((TieneHijos>=6)&&(SeRompio<=1)) {
								cout << "Se rompio el condon \n";
								Persona* Pnew = P1*P2;
								vList->push_back(Pnew);
							}
						} break;
						case 2: {
							int TieneHijos = rand() % 28;
							//cout << "TieneHijos: " << TieneHijos << "\n"; 
							if (TieneHijos>=6) {
								cout << "Felicidades saco un hijo \n";
								Persona* Pnew = P1+P2;
								vList->push_back(Pnew);
							}
						} break;
					}
				}
			} break;
		}
	}
	for (int i = 0;i<vList->size();i++) {
		delete vList->at(i);
	}
	delete vList;
	return 0;
}
void Listar(vector<Persona*>* List) {
	for (int i = 0;i<List->size();i++) {
		cout << i << ") " << List->at(i)->toString() << "\n";
	}
}
