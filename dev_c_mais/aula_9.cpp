#include<iostream>

using namespace std;

int main(){
	
	int num;
	char le;
	
	inicio:
	
	cout<<"insira valor que deseja consultar ";
	cin>>num;
	
	if(num > 4 && num <8){
		cout<<"\n Valor aceito \n";
	}
	else {
		cout<<"\n Valor negado \n";
	}
	
	cout<<"\n Deseja retomar o inicio? [s/n]\n";
	cin>>le;
	if (le=='s' or le=='S'){
		goto inicio;
	}
	else 
	{
		cout<<" \n fim \n";
	}
	return 0;
}
/*
&& and
\\ or
! not
*/
