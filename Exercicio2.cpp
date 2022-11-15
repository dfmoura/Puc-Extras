/*
Divisão dos Gastos
Aramis - c : f
Porthos - d : g
Athos - e : h
*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	float a,b,c,d,e,f,g,h;
	cin>>c>>d>>e;
	a = c+d+e;
	b = a/3; 
	f = c-b; 
	g = d-b;
	h = e-b;

    cout<<"Total dos gastos: " << setprecision(2) << fixed<<a<<endl;
    cout<<"Valor individual: " << setprecision(2) << fixed<<b<<endl;  

	if (f>0 and g==0 and h<0){cout<<"Athos deve R$ "<<setprecision(2) << fixed<<f<<" a Aramis e R$ "<<setprecision(2) << fixed<<g<<" a Porthos"<<endl;}
	else if (f>0 and g<0 and h<0){cout<<"Porthos deve R$ "<<setprecision(2)<<fixed<<g*-1<<" a Aramis"<<endl;
					cout<<"Athos deve R$ "<<setprecision(2)<<fixed<<h*-1<<" a Aramis"<<endl;}
	else if (f<0 and g>0 and h>0){cout<<"Aramis deve R$ "<<setprecision(2)<<fixed<<g<<" a Porthos e R$ "<<setprecision(2)<<fixed<<h<<" a Athos"<<endl;}
	else if(f<0 and g>0 and h<0){cout<<"Aramis deve R$ "<<setprecision(2)<<fixed<<f*-1<<" a Porthos"<<endl;
					cout<<"Athos deve R$ "<<setprecision(2)<<fixed<<h*-1<<" a Porthos"<<endl;}
	else if(f>0 and g<0 and h>0){cout<<"Porthos deve R$ "<<setprecision(2)<<fixed<<h<<" a Athos e R$ "<<setprecision(2)<<fixed<<f<<" a Aramis"<<endl;}
	else if(f<0 and g<0 and h>0){cout<<"Aramis deve R$ "<<setprecision(2)<<fixed<<f*-1<<" a Athos"<<endl;
					cout<<"Porthos deve R$ "<<setprecision(2)<<fixed<<g*-1<<" a Athos"<<endl;}
	else if(f==g and g==h){cout<<"Ninguem deve nada para ninguém"<<endl;}
	else if(f>0 and g>0 and h<0){cout<<"Athos deve R$ "<<setprecision(2) << fixed<<f<<" a Aramis e R$ "<<setprecision(2) << fixed<<g<<" a Porthos"<<endl;}

}

