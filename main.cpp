#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
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
				cout << "(Blanco 1:, Negro: 2) \n";
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
				cout << "Ingrese Cual Persona borrar \n";
				Listar(vList);
				int opDel;
				cin >> opDel;
				delete vList->at(opDel);
				vList->erase(vList->begin() + opDel);
			} break;
			case 3: {
				Listar(vList);
			} break;
			case 4: {

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
