#include <iostream>
#include <locale.h>

/*Fa�a um programa que elia o raio de um c�rculo e imprima sua �rea A
e seu per�metro P.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float raio;
	float area;
	float perimetro;
	float pi;
	
	pi = 3.14;
	
	cout << endl;
	cout << "Digite o raio do c�rculo: ";
	cin >> raio;
	
	area = raio*raio*pi;
	perimetro = 2*pi*raio;
	
	cout << "Um c�rculo de raio " << raio << " possui �rea de " << area << " e per�metro de " << perimetro;
	
	cout << endl;
	system("pause");
	
	return 0;
}
