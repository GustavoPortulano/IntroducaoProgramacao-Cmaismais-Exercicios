#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*26 de junho de 2025*/
/*Exerc�cio 3.1*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	/*Fa�a um programa que leia uma altura e um peso de uma pessoa e imprima
	seu �ndice de Massa Corporal (IMC), que � calculado com a f�rmula:
		
		IMC = peso/altura�
	
	Exemplo de sa�da:
	
	Digite a altura da pessoa: 1.8
	Digite o peso da pessoa: 68
	O �ndice de Massa Corporal desta pessoa � 20.9876*/
	
	float altura;
	float peso;
	float imc;
	
	cout << "Digite a altura da pessoa: ";
	cin >> altura;
	cout << "Digite o peso da pessoa: ";
	cin >> peso;
	
	imc = peso/(altura * altura);
	
	cout << endl;
	cout << "O IMC desta pessoa �: " << imc << endl;
	
	system("pause");
	
	return 0;
}
