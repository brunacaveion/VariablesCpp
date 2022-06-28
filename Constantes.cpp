// We'll see the diference between #define and assign a number to a variable

// When we assign a number to a variable this variable is stored in memory;
/* when we use #define this variable is not stored in the memory, it exchange the number in the code instead of call it from memory */

# include <iostream>
// To use #define we put them underneath of #include
#define NUM_VIDAS 10 // without ; on the end!
int main()
{
	//const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereço de memória de NUM_VIDAS: " << &NUM_VIDAS << "\n"; /* The variable has memory adress when is not #define. The code will get an error if you want to plot the adress for a #define variable*/
	system("PAUSE");

}