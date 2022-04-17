#include<iostream>
using namespace std;
int main()
{
	int pessoas=0; //umeros inteiros
	char num ='b'; //uma letra, se pode aumentar com char ..[20];
	double decimal=5.2; //2,5
	float decimal_2 =5.2; //precisao menor que double
	bool vivo =true; //verdadeiro ou falso
	string nome ="Rebeca"; //recebe um texto, char somente um caracter
	
	cout<<"digite valor inteiro ";
	cin>>pessoas;
	cout<<"uma letra ";
	cin>>num;
	cout<<"um valor decimal ";
	cin>>decimal;
	cout<<"um valor decimal2 ";
	cin>>decimal_2;
	cout<<"digite numero 0 ou 1 ";
	cin>>vivo;
	cout<<"digite um nome ";
	cin>>nome;
	
	vivo=false; //o importante é o ultimo comando
	
	cout<< pessoas <<"\n";
	cout<< num <<"\n";
	cout<< decimal <<"\n";
	cout<< decimal_2 <<"\n";
	cout<< vivo <<"\n";
	cout<< nome <<"\n";
	system("pause");
	return 0;
	/*
eh isso
	*/
}
