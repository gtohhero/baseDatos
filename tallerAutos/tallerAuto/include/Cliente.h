#ifndef CLIENTE_H
#define CLIENTE_H

#include "../TLista.h"

class Cliente
{
    public:
        Cliente(string);
        void guardarCliente(Cliente);
        void setCliente(string, int, string, string, int, char);
        void guardarEnArchivo(ofstream &archivo);
        void leerDeLinea(string &);
        TLista* leerClientes();
        string getNombre() {
            return nombre;}
        int getTelefono() {
            return telefono;}
        string getAutomovil() {
            return automovil;}
        string getModelo() {
            return modelo;}
        int getAnio() {
            return anio;}
        char getTipoServicio() {
            return tipoServicio;}

    private:
        string nombre;
        int telefono;
        string automovil;
        string modelo;
        int anio;
        char tipoServicio;

        string textxt;
};

#endif // CLIENTE_H
