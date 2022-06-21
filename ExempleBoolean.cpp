#include <iostream>

// Exemple of a boolean variable

int main()
{
	bool bAchou; // we put b to indicates boolean 

	bAchou = 1; // 1 stands for true
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0; // 0 stands for false
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd'; // ANYTHING different of 0 is compiled as true
	std::cout << "Valor de bAchou: " << bAchou << "\n";


	system("PAUSE");
}