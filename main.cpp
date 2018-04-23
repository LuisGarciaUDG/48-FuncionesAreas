/*
Programa_48

funciones sin parametros.
prototipos, variables globales.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 16 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void cuadrado (); // prototipo
void rectangulo (); // prototipo

float x,y,z; // variables globales

int main()
{
int opcion;

do
{
    system ("cls");

    cout << "\n\t\aPrograma de Multiplicaion y Division" << endl;

    cout<<"\n\n\t#########################";
    cout<<"\n\n\t#                       #";
    cout<<"\n\n\t# MENU                  #";
    cout<<"\n\n\t#                       #";
    cout<<"\n\n\t# 1.-Area de cuadrado   #";
    cout<<"\n\n\t# 2.-Area de rectangulo #";
    cout<<"\n\n\t# 3.-Salir              #";
    cout<<"\n\n\t#                       #";
    cout<<"\n\n\t#########################";
    cout<<"\n\n\t#                      ";
    cin>>opcion;

    switch (opcion)
    {
        case 1:
        cuadrado();
        break;

        case 2:
        rectangulo();
        break;
    }

}while (opcion!=3);
cout<<"\a";

    return 0;
}

void cuadrado()
{
    system ("cls");
    cout<<"\n\tArea de un cuadrado \n";

    cout<<"\n\n\tDame la base:   ";
    cin>>x;
    cout<<"\n\n\tDame la altura: ";
    cin>>y;
    z=x*y;
    cout<<"\n\n\tEl area es: "<<z;

cout<<"\n\n\t\t\t";
system ("pause");
}

void rectangulo()
{
    system ("cls");
    cout<<"\n\tLa Area de un rectangulo \n";
    cout<<"\n\n\tDame la base:   ";
    cin>>x;
    cout<<"\n\n\tDame la altura: ";
    cin>>y;
    z=x*y;
    cout<<"\n\n\tEl area es: "<<z;

cout<<"\n\n\t\t\t";
system ("pause");
}
