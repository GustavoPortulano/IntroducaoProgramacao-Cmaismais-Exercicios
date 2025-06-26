#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*26 de junho de 2025*/
/*Exercício 3.1*/

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	/*Faça um programa que leia uma altura e um peso de uma pessoa e imprima
	seu Índice de Massa Corporal (IMC), que é calculado com a fórmula:
		
		IMC = peso/altura²
	
	Exemplo de saída:
	
	Digite a altura da pessoa: 1.8
	Digite o peso da pessoa: 68
	O Índice de Massa Corporal desta pessoa é 20.9876*/
	
	float altura;
	float peso;
	float imc;
	
	cout << "Digite a altura da pessoa: ";
	cin >> altura;
	cout << "Digite o peso da pessoa: ";
	cin >> peso;
	
	imc = peso/(altura * altura);
	
	cout << endl;
	cout << "O IMC desta pessoa é: " << imc << endl;
	
	system("pause");
	
	return 0;
}
