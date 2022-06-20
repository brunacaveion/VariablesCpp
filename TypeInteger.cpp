#include <iostream>

int main()
{
	int Numero;
	Numero = 45;
	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero)<< "Bytes" << "\n";
	std::cout << "Endereco Carregado na Memoria: " << &Numero << "\n";

	system("PAUSE");

}
