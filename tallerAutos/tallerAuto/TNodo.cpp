#include "TNodo.h"

TNodo::TNodo()
{
	sig=NULL;
}

TNodo::TNodo(Cliente* dato)
{
	this->dato=dato;
	sig=NULL;
}

void TNodo::set_dato(Cliente* dato)
{
	this->dato=dato;
}

void TNodo::set_sig(TNodo* sig)
{
	this->sig=sig;
}

Cliente* TNodo::get_dato()
{
	return dato;
}

TNodo* TNodo::get_sig()
{
	return sig;
}
