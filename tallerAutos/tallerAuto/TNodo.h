#ifndef TNODO_H
#define TNODO_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Cliente;

class TNodo
{
	private:
		Cliente* dato;
		TNodo* sig;
	public:
		TNodo();
		TNodo(Cliente*);
		void set_dato(Cliente*);
		void set_sig(TNodo*);
		Cliente* get_dato();
		TNodo* get_sig();
};

#endif
