#include <iostream>
#include <iomanip> // allows to set a precision for a double

/* The goal of this code is to create variables of type int, float, double, char, and print their respective values, sizes in bytes, and memory adress*/

int main()
{
	int Numero;
	float Numero2;
	double Numero3 = 871.401f;
	char Caractere = 'B';
	

	Numero = 27;
	Numero2 = 1.35f; // f says it is a float

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero << "\n";

	std::cout << "Valor Numero 2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero 2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero2 << "\n";

	std::cout << "Valor Numero 3: " << std::setprecision(7) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero 3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero3 << "\n";

	std::cout << "Valor charactere: " << Caractere << std::endl;
	std::cout << "Tamanho da Variavel Caractere: " << sizeof(Caractere) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << (void *)&Caractere << "\n"; /* (void *) prints the adress without error */

	system("PAUSE");
}

