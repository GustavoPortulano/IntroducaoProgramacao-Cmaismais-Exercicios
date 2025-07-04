#include <iostream>
#include <locale.h>


/*Exercício 3.2 Faça um programa que leia uma temperatura em Celsius e imprime 
esta temperatura em Fahrenheit. Considere a fórmula:

F = (9C/5) + 32

Exemplo de saída:
Digite a temperatura em Celsius: 20.5
20.5 graus Celsius equivalem a 68.9 graus Fahrenheit
*/

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	cout << endl;
	float celsius;
	float fahrenheit;
	
	cout << "Digite a temperatura em Celsius: ";
	cin >> celsius;
	
	fahrenheit = (9*celsius/5) + 32;
	
	cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit.";
	cout << endl;
	system("pause");
	
	return 0;
}


