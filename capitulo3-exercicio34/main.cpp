#include <iostream>
#include <locale.h>

/*Exerc�cio 3.4 Fa�a um programa que leia dois valores a e b e imprima o resultado de
(b� + ab) -2b +a mod b . Em nota��o matem�tica, mod representa o resto da divis�o de dois
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
