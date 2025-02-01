#include "Cliente.h"

int main() {
    string nombreArchivo = "taller.txt";
    Cliente cliente(nombreArchivo);

    string nombre, modelo, autom;
    int tel, anio;
    char tipo;

    int opcion;
    do {
        cout << "\nMen� Taller de Autos\n";
        cout << "1. Registrar cliente\n";
        cout << "2. Ver todos los clientes\n";
        cout << "3. Buscar cliente por nombre\n";
        cout << "4. Modificar cliente\n";
        cout << "5. Salir\n";
        cout << "Elige una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Nombre: "; cin>>nombre;
                cout << "Tel�fono: "; cin>>tel;
                cout << "Auto: "; cin>>autom;
                cout << "Modelo del auto: "; cin>>modelo;
                cout << "A�o del auto: "; cin >> anio;
                cout << "Tipo de servicio: "; cin >> tipo;

                cliente.setCliente(nombre, tel, autom, modelo, anio, tipo);
                cliente.guardarCliente(cliente);
                break;
            case 2: {
                cout<<endl;
                TLista * clientes = cliente.leerClientes();
                clientes->mostrar_lista();
                break;
            }
            /*case 3: {
                string nombre;
                cout << "Nombre del cliente a buscar: "; cin>>nombre;
                //buscarCliente(nombre, nombreArchivo);
                break;
            }
            case 4: {
                string nombre;
                cout << "Nombre del cliente a modificar: "; cin>>nombre;
                //modificarCliente(nombre, nombreArchivo);
                break;
            }*/
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opci�n inv�lida.\n";
        }
    } while (opcion != 5);

    return 0;
}
