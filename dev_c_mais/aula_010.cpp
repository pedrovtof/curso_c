#include<iostream>

using namespace std;

int main (){
	
	int n1,n2,nota;
	string res;
	
	cout<<"Digite a primeira nota : \n";
	cin>>n1;
	cout<<"Digite a segunda nota : \n";
	cin>>n2;
	
	nota=n1+n2;
	
	//(nota>=60) ? res="aprovado": res="reprovado";
	//(n1>=10) ? x++ : x--;
	
	res=(nota>=50) ? "aprovado" : "reprovado";
	
	cout<<"situacao do aluno \n"<<res<<"\n";
	
	return 0;
}
// (expressao) ? valor1 : valor2 :
