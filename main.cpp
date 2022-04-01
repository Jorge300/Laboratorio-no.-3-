#include <iostream>
#include <conio.h>
#include "biblioteca.hpp"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, result;
	char sim;
	
	cout<<"Ingrese el primer numero: "; 
	cin>>n1; cout<<"\n";
	cout<<"Ingrese el segundo numero: ";
	cin>>n2; cout<<"\n";
	cout<<"Ingrese el simbolo de la operacion que desea realizar"<<endl;
	cout<<"(+,-,*,/): "<<endl;
	cin>>sim; cout<<"\n";
	
	switch(sim){
		case '+': 
			cout<<"Suma:\n";
			result = sum(n1, n2);
			cout<<"El resultado de la suma es: "<<result; 
		break;
		
		case '-': 
			cout<<"Resta:\n";
			result = res(n1, n2);
		    cout<<"El resultado sera siempre un numero positivo";
			cout<<"El resultado de la resta es: "<<result<<"\n"; 
		break;
		
		case '*': 
			cout<<"Multiplicacion:\n";
			result = mult(n1, n2);
			cout<<"El resultado de la multiplicacion es: "<<result; 
		break;
		
		case '/': 
			cout<<"Division:\n";
			result = divis(n1, n2);
			cout<<"El resultado de la division es: "<<result; 
		break;
		
		default: 
		cout<<"El signo no coincide con ninguno (+,-,/,*) Vuleva a intentarlo";
	}

	
	getch();
	return 0;
}

