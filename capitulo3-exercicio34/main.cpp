#include <iostream>
#include <locale.h>

/*Exercício 3.4 Faça um programa que leia dois valores a e b e imprima o resultado de
(b³ + ab) -2b +a mod b . Em notação matemática, mod representa o resto da divisão de dois
inteiros.*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a;
	int b;
	int fx;
	
	cout << endl;
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	
	fx = (b*b*b + a*b) - 2*b + a%b;
	
	cout << "f(x) = " << fx;
	cout << endl;
	
	system("pause");
	return 0;
}
