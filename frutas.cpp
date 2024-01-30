/*
Titulo:Generar fruta y preparado aleatorios
Auntor:Jose Eduardo Flores Saravia
Descripcion: Ejercicio en clases
Fecha 2024-01-29
*/
#include <iostream>
#include <string>
using namespace std;

string frutas[] = {"Manzana", "Banana", "Naranja", "Fresa", "Kiwi", "Mango", "Pera", "Uva", "Melón", "Papaya"};//Cadema de fritas
string preparados[] = {"Jugo", "Ensalada", "Frapé", "Tarta", "Helado", "Mermelada", "Batido", "Asado", "Cóctel", "Crudo"};//Cadena de preparado
string fruta[10];//Almacenar la generacion de frutas en un orden aleatorio de la cadena 
string preparado[10];//Almacenar la generacion de preparado en un orden aleatorio de la cadena

string generarFruta()//genera la fruta de la cadena en un orden aleatorio
{
	return frutas[rand() % 10];
}

string generarPreparado()//genera el preparado de la cadena en un orden aleatorio
{
	return preparados[rand() % 10];
}

void generar()//Genere el orden de la generacion de fruta y preparado
{
	for (int i = 0; i < 10; i++)
	{
		fruta[i] = generarFruta();
		preparado[i] = generarPreparado();
	}
}

void imprimir()//imprime la fruta y el preparado
{
	cout << "Menu de productos" << endl;
	for (int i = 0; i < 10; i++)
		cout << preparado[i] << " de " << fruta[i] << endl;
}

void antDuplicadoFru()//Funcion para que la fruta no se duplique
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			while (fruta[i] == fruta[j])
			{
				fruta[i] = generarFruta();
				j = 0;
			}
		}
	}
}

void antDuplicadoPre()//Funcion para que la preparado no se duplique
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			while (preparado[i] == preparado[j])
			{
				preparado[i] = generarPreparado();
				j = 0;
			}
		}
	}
}

int main()
{
	generar();
	antDuplicadoFru();
	antDuplicadoPre();
	imprimir();
	return 0;
}
