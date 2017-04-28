#include <stdlib.h>
#include <stdio.h>

/*	Programa que recebe dois números inteiros e calcula: A soma dos dois números, a subtração do primeiro pelo 		
	segundo, a multiplicação dos dois números, a divisão do primeiro pelo segundo, o resto da divisão dos dois 		
	números e o quociente da divisão. 

	Autor: Christian Alves
	Data: 29/09/2014

*/

main (){
	
	int num1, num2, soma, sub, mult;
	float div, div1, resto, quo;
	
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
	printf("*** Programa que recebe dois numeros inteiros e calcula: ***\n*** A soma dos dois numeros, a subtracao do primeiro pelo");		
	printf("segundo, ***\n*** a multiplicacao dos dois numeros, a divisao do primeiro pelo segundo ***\n*** e o resto da divisao dos dois");		
	printf("numeros ***.\n\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

	printf("\n\nDigite o primeiro numero: "); scanf("%i", &num1);
	printf("Digite o segundo numero: "); scanf("%i", &num2);

	
	soma = (num1 + num2) ;
	sub = (num1 - num2) ;
	mult = (num1 * num2) ;
	div = (num1 / num2) ;
	div1 = (num2 / num1) ;
	resto = (num1 % num2);

	printf("A soma e: %i\n", soma);
	printf("A subtracao e: %i \n", sub);
	printf("A multiplicacao e: %i\n", mult);
	printf("A divisao do primeiro pelo segundo e: %.0f\n", div);
	printf("A divisao do segundo pelo primeiro e: %.0f\n", div);
	printf("O resto da divisao e: %.0f\n", resto);


}
