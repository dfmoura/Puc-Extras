/*
Descrição no anexo:
Balanceamento de Carga na Aliança Rebelde

https://cplusplus.com/reference/algorithm/next_permutation/

https://cplusplus.com/reference/algorithm/sort/

*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int c,d,e,f;
    string j;
    cin >>c>>d>>e>>f;
    int arr[] = { c, d, e, f};
    sort(arr, arr + 4);
    do {
        if(((arr[0]+arr[1])==(arr[2]+arr[3]))||((arr[0])==(arr[1]+arr[2]+arr[3]))){j="sim";cout<<"sim"<<endl;break;}else{j;}
    } while (next_permutation(arr, arr + 4));
    if(j=="sim"){}else{cout<<"nao"<<endl;}
    j="";
    cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<' '<<arr[0]<<' '<<endl;

}