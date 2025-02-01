#ifndef TLISTA_H
#define TLISTA_H

#include "TNodo.h"

class TLista
{
	private:
		TNodo * cab, * ultimo;
	public:
		TLista();
		void insertar_inicio(Cliente*);
		void insertar_final(Cliente*);
		void mostrar_lista();
};

#endif
