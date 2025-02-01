
#include "Cliente.h"

Cliente::Cliente(string txt)
{
    textxt=txt;
}

void Cliente::guardarCliente(Cliente cliente) {
    ofstream archivo(textxt, ios::app);
    if (archivo.is_open()) {
        cliente.guardarEnArchivo(archivo);
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}

void Cliente::setCliente(string nom, int tel, string car, string mdl, int anio, char tipo) {
    nombre=nom;
    telefono=tel;
    automovil=car;
    modelo=mdl;
    tipoServicio=tipo;
    this->anio=anio;
}

void Cliente::guardarEnArchivo(ofstream &archivo) {
    archivo << nombre << ", " << telefono << ", "
            << modelo << ", " << anio << ", "
            << tipoServicio << "\n";
}

void Cliente::leerDeLinea(string &linea) {
    stringstream ss(linea);
    getline(ss, nombre, ',');
    ss >> telefono;
    ss.ignore();
    getline(ss, modelo, ',');
    ss >> anio;
    ss.ignore();
    ss >> tipoServicio;
    ss.ignore();
}

TLista* Cliente::leerClientes() {
    TLista * clientes = new TLista();
    ifstream archivo(textxt);

    if (archivo.is_open()) {
        string linea;

        while (getline(archivo, linea)) {
            Cliente * cliente = new Cliente(textxt); // Crear un nuevo objeto Cliente en cada iteración
            cliente->leerDeLinea(linea);
            clientes->insertar_final(cliente);
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para lectura." << endl;
    }

    return clientes;
}

