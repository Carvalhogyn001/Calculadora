#include <stdlib.h>
#include <iostream>

using namespace std;

/*	Programa que recebe dois números inteiros e calcula: A soma dos dois números, a subtração do primeiro pelo 		
	segundo, a multiplicação dos dois números, a divisão do primeiro pelo segundo, o resto da divisão dos dois 		
	números e o quociente da divisão. 

	Autor: Christian Alves
	Data: 29/09/2014

*/

main (){
	
	int num1, num2, soma, sub, mult;
	float div, div1, resto, quo;
	
	cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n"<< endl;
	cout << "*** Programa que recebe dois numeros inteiros e calcula: ***\n*** A soma dos dois numeros, a subtracao do primeiro pelo"<< endl;		
	cout << "segundo, ***\n*** a multiplicacao dos dois numeros, a divisao do primeiro pelo segundo ***\n*** e o resto da divisao dos dois"<< endl;		
	cout << "numeros ***.\n\n"<< endl;
	cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<< endl;

	cout << "\n\nDigite o primeiro numero: "<< endl; cin >> num1;
	cout << "Digite o segundo numero: "<< endl; cin >> num2;

	
	soma = (num1 + num2) ;
	sub = (num1 - num2) ;
	mult = (num1 * num2) ;
	div = (num1 / num2) ;
	div1 = (num2 / num1) ;
	resto = (num1 % num2);

	cout << "A soma e: " << soma<< endl;
	cout << "A subtracao e: " << sub<< endl;
	cout << "A multiplicacao e: " << mult<< endl;
	cout << "A divisao do primeiro pelo segundo e: " << div<< endl;
	cout << "A divisao do segundo pelo primeiro e: " << div<< endl;
	cout << "O resto da divisao e: " << resto<< endl;


}
