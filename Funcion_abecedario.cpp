/*
Titulo:Generar letras y numero aleatorios
Auntor:Jose Eduardo Flores Saravia
Descripcion: Ejercicio en clases
Fecha 2024-01-29
*/
#include <iostream>

using namespace std;

char caracter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int numero[26];
char c[26];

char generarCaracter()//Genera un caracter aleatorio a,b,c...
{
	return caracter[rand() % 26];
}

int generarNumero()//genera un numero aleatorio entre 0 - 50
{
	return rand() % 51;
}

void imprimir()//Imprime el caracter y el numero
{
	cout << "Car\tNUM" << endl;
	for (int i = 0; i < 26; i++)
		cout << c[i] << "\t" << numero[i] << endl;
}

void generarDatos()//genera el numero y el caracter aleatorio
{
	for (int i = 0; i < 26; i++)
	{
		numero[i] = generarNumero();
		c[i] = generarCaracter();
	}
}

void antDuplicado()//Funcion para que la caracter no se repita
{
	for (int i = 0; i < 26; i++)//bucle externo
	{
		for (int j = 0; j < i; j++)//bucle interno
		{
			//Generar una nueva letra con uso de un bucle while
			while (c[i] == c[j])//Si la letra de la pocion i es igual a la letra de la pocision j entonces inicia este bucle
			{
				/*si se detecta una letra duplicada c[i] va a agenerar un nuevo caracter*/
				c[i] = generarCaracter();
				/*Una vez cambiado el caracter el contador interno c[j] se reinicia para verificar que no se generen caracteres identicos.*/
				j = 0; // Reiniciar el bucle interno para verificar desde el principio
			}
		}
	}
}

int main(int argc, char *argv[])
{
	generarDatos();
	antDuplicado();
	imprimir();
	return 0;
}
