#include<iostream>
#include"biblioteca.hpp"
using namespace std;

int sum(int x, int y){
	return x+y;
}


int res(int x, int y){
	if(x >= y)
	{
		return x-y;
	}
	else if(y > x)
	{
		cout<<"¡Se restara siempre el numero menor al numero mayor!"<<endl;
		 cout<<"\n";
		return y-x;
}
}
int mult(int x, int y){
	return x*y;
}

char divid(float x, float y); 
int divis(int x, int y)
{	
	if(x > y){
		if(y == 0){
			cout<<"¡No se puede dividir entre 0!";
		}
	}
	
		int residuo = x % y;
		if(residuo > 0){
			cout<<"!ALERTA! El resultado contiene decimales\n";
			cout<<"Los cuales no mostrara el programa"<<endl;
			cout<<endl;
			return x/y;
		}
		return x/y;
}


