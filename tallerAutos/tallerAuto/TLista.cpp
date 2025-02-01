
#include "TLista.h"
#include "Cliente.h"

TLista::TLista()
{
	cab=new TNodo;
	ultimo=cab->get_sig();
}

void TLista::insertar_inicio(Cliente* dato)
{
	TNodo * p = new TNodo(dato);
	if(ultimo==NULL)
	{
		ultimo=p;
		cab->set_sig(p);
	}
	else
	{
		p->set_sig(cab->get_sig());
		cab->set_sig(p);
	}
}

void TLista::insertar_final(Cliente* dato)
{
	TNodo *p = new TNodo(dato);
    if (cab->get_sig() == NULL) {
        cab->set_sig(p);
    } else {
        ultimo->set_sig(p);
    }
    ultimo = p;

}

void TLista::mostrar_lista() {
    if(cab->get_sig()!=NULL)
            {
            TNodo * p;
            p = cab->get_sig();
            while(p!=NULL)
            {
                cout << "Nombre: " << p->get_dato()->getNombre()
                     << ", Teléfono: " << p->get_dato()->getTelefono()
                     << ", Auto: " << p->get_dato()->getAutomovil() << ", Modelo: " << p->get_dato()->getModelo() << " , Año: " << p->get_dato()->getAnio()
                     << ", Servicio: " << p->get_dato()->getTipoServicio() << endl << endl;
                p = p->get_sig();
            }
        }
        else
            cout<<"Error, lista inexistente"<<endl;
}
