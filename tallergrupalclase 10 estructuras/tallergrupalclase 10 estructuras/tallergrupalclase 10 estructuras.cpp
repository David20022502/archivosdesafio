#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream datosPersonales;
    string nomb, apellid, nombrearchiv;
    int edad;
    cout << "ingrese el nombre que desea para su archivo: ";
    getline(cin, nombrearchiv);
    datosPersonales.open(nombrearchiv.c_str(), ios::app);
    cout << "ingrese el nombre:" << endl;
    getline(cin, nomb);
    cout << "ingrese el apellido: " << endl;
    getline(cin, apellid);
    cout << "ingrese la edad: " << endl;
    cin >> edad;
    datosPersonales << nomb << " " << apellid << " " << edad << "\n";
    datosPersonales.close();

    
    ifstream imprimirdatos(nombrearchiv.c_str(), ios::in);
    string texto;
    if (imprimirdatos.fail())
    {

    }
    else
    
    {
       while (!imprimirdatos.fail())
       {
           getline(imprimirdatos, texto);
           cout << texto << endl;
       }
    }
    imprimirdatos.close();

    return 0;
}

