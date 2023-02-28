#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool encuentra(char cad){
    char letras [] = "qwertyuiopasdfghjklzxcvbnm";
    for(int i=0; i<sizeof(letras)/sizeof(letras[0]); i++){
        if(letras[i] == tolower(cad)){
            return true;
        }
    }
    return false;
} 

bool encuentraNum(char cad){
    char num [] = "1234567890";
    
    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++){
          if(num[i] == cad){
            return true;
        }
    }
    return false;
}

int main()
{
string cad;
getline(cin, cad);
int valor =0;
for(int i=0; i<cad.length(); i++){
    if(encuentraNum(cad[i]) == true){
        valor+=20;
        
    }else if(encuentra(cad[i]) == true){
        valor+=10;
         
    }else if(cad[i] == ' '){
    continue;
    }else{
        
        valor+=30;
    }
}


cout<<"su mensaje cuesta $"<<valor<<endl;


    return 0;
}