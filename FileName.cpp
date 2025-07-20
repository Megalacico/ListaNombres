#include <iostream>
#include <vector>
#include <string>
using namespace std;

static void imprimirVector(const vector<string>& nombres)
{
    for (string n : nombres)
    {
        cout << n << endl;
    }

}
static void agregarNombre(vector<string>& nombres, string nombre)
{

    nombres.push_back(nombre);
}
static void eliminarNombre(vector<string>& nombres, string nombre)
{
    for (string nom : nombres)
    {
        if (nom == nombre)
        {
            nombres.erase(remove(nombres.begin(), nombres.end(), nom), nombres .end());
        }
        else 
        {
			cout << "El nombre no se encuentra en la lista." << endl;
        }
    }
}

int main()
{
    vector<string> nombres;
    vector<string> sexo;

    int numero;
    string nombre;
    while (true)
    {

		cout << "1 -> para saber los nombres que escribio" << endl;
        cout << "2 -> para agregar un nuevo usuario" << endl;
        cout << "3 -> para eliminar un usuario" << endl;
        cout << "4 -> para salir del programa" << endl;;
		cout << "Ingrese una opcion: ";
        cin >> numero;
        if (numero == 1)
        {
            imprimirVector(nombres);
        }
        if (numero == 2)
        {
            
            cout << "Ingrese el nuevo nombre: ";
            getline(cin >> ws, nombre);
            agregarNombre(nombres, nombre);
        }
        if (numero == 3)
        {
            cout << "Ingrese el nombre que desea eliminar: ";
			getline(cin >> ws, nombre);
            eliminarNombre(nombres, nombre);
        }
        if (numero == 4)
        {
			cout << "Saliendo del programa." << endl;
            break;
        }
    }
    return 0;
}