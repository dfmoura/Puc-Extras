/*
Emprestimo


*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()

{

	float emprestimo, juros,b,c;
	int parcelas,auxiliar;

	cin>>emprestimo>>parcelas>>juros;
	auxiliar=0;
	b=0;
	c=0;
	
	if (emprestimo<1000){cout<<"O valor do emprestimo deve ser > R$ 1000,00"<<endl;}
	else if (parcelas<10){cout<<"A quantidade de parcelas estar entre 10 e 360."<<endl;}
	else if (parcelas>360){cout<<"A quantidade de parcelas estar entre 10 e 360."<<endl;}
	else if(juros<0){cout<<"A taxa de juros deve ser positiva."<<endl;}
	else{
		for(int i = 1; i<=parcelas;i++){
			cout << "Parcela " << i <<" - "<<" R$ "<<setprecision(2) << fixed<< emprestimo/parcelas+((emprestimo-((emprestimo/parcelas)*auxiliar++))*(juros/100))<<endl;
			c += emprestimo/parcelas+((emprestimo-((emprestimo/parcelas)*b++))*(juros/100));
		}
		cout <<"Valor total a ser pago: R$ "<<setprecision(2) << fixed<< c<<endl;
	}
}

