#include <iostream>
#include <tchar.h>

int main()
{
	//it makes the code recognize portuguese language 
	_tsetlocale(LC_ALL, _T("portuguese")); 

	// Variables declaration
	/* We need to declare the variables before calling them, for exemple:
	int Number;
	Number=54; 
	if we do Number=54; it will get error*/
	int NumVidas = 5; 
	int Pontuacao = 1350;
	std::cout << "****INICIO DO JOGO****" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	// Variables size
	std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas)<< "Bytes" << "\n";
	std::cout << "Tamanho da Variável Pontuacao: " << sizeof(Pontuacao)<< "Bytes" << "\n";

	// The RAM adress of the variables might change every time we run the code
	std::cout << "Endereço que NumVidas Ocupa na Memória RAM:" << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação Ocupa na Memória RAM:" << &NumVidas << "\n";
	std::cout << "********************" << std::endl;

	// Update the variables stored in the memory
	std::cout << "****DURANTE O JOGO****" << std::endl;
	Pontuacao = Pontuacao + 150; // this is equal to: Pontuacao += 150;
	NumVidas = NumVidas - 1;  // this is equal to NumVidas -= 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "********************" << std::endl;

	system("PAUSE");
}

/* select variable and ctrl + r over it: opens a box that allows you to rename a variable. 
It will automatically change for the new name all over the code*/