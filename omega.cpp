#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

string cad;
cin>>cad;

int sol;
int may = 0, aux =0;
for(int i=0; i<cad.length(); i++){
    if(cad[i] == '0'){
        may++;
    }else{
        if(may > aux){
            aux = may;
            may=0;
        }
    }
}
if(aux%2==0){
    sol = (int)(aux/2);
}else{
    sol = (int)(aux/2)+1;
}

cout<<sol<<endl;


return 0;
}

