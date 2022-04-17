#include<iostream>

using namespace std;

int num_4,num_5; //variaveis globais.


int main()
{
	//operadores matematicos : - + / * % () []
	int num,num_2,num_3; //variaveis locais.
	
	int resul;
	
	cout<<"digite valor do numero 1 : ";
	cin>>num;
	cout<<"digite valor do numero 2 : ";
	cin>>num_2;
	cout<<"digite valor do numero 3 : ";
	cin>>num_3;
	cout<<"digite valor do numero 4 : ";
	cin>>num_4;
	cout<<"digite valor do numero 5 : ";
	cin>>num_5;
	resul=num_2+num-num_3/(num_4*num_5);
	cout<<"Resultado e : "<<resul<<"\n";
	
	system("pause");
	return 0;
}
