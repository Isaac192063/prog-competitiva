/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int
main ()
{

string cad, cadNueva;
cin>>cad;
int numM=0, num=0;
char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
char alfabeto2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (int j =0; j<cad.length(); j++){
    for(int i =0; i<sizeof(alfabeto)/ sizeof(alfabeto[0]); i++){
        if(cad[j] == alfabeto[i]){
            num++;
        }
    }
}
for (int j =0; j<cad.length(); j++){
    for(int i =0; i<sizeof(alfabeto)/ sizeof(alfabeto[0]); i++){
        if(cad[j] == alfabeto2[i]){
            numM++;
        }
    }
}


if(num == numM || num > numM){
    for(int i =0; i<cad.length(); i++){
        
    cad[i] = tolower(cad[i]);
    }
}else{
    for(int i =0; i<cad.length(); i++){
        
    cad[i] = toupper(cad[i]);
    }
}

cout<<cad;


  return 0;
}