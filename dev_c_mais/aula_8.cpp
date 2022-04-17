#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	
	float not1,not2,not3,not4, res;
	char opc;
	
	inicio:
	system("cls");
	
	cout<<"Nota do aluno 1 bimestre : ";
	cin>>not1;
	
	cout<<"Nota do aluno 2 bimestre : ";
	cin>>not2;
	
	cout<<"Nota do aluno 3 bimestre : ";
	cin>>not3;
	
	cout<<"Nota do aluno 4 bimestre : ";
	cin>>not4;
	
	res=(not1+not2+not3+not4)/4;
	
	if (res>=6){
		cout<<"Aprovado! \n"<<res;
	}
	else if (res>=5){
		cout<<"Recuperacao! \n"<<res;
	}
	else {
		cout<<"Reprovado! \n"<<res;
    }
    
    cout<<"\n Deseja calcular uma nova media ? [s/n] : ";
    cin>>opc;
    
    if (opc=='s'or opc=='S'){
	goto inicio;
	}
	return 0;
}
/*

*/
