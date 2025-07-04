#include <iostream>
#include <locale.h>

/*Faça um programa que elia o raio de um círculo e imprima sua área A
e seu perímetro P.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float raio;
	float area;
	float perimetro;
	float pi;
	
	pi = 3.14;
	
	cout << endl;
	cout << "Digite o raio do círculo: ";
	cin >> raio;
	
	area = raio*raio*pi;
	perimetro = 2*pi*raio;
	
	cout << "Um círculo de raio " << raio << " possui área de " << area << " e perímetro de " << perimetro;
	
	cout << endl;
	system("pause");
	
	return 0;
}
