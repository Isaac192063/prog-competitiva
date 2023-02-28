#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  string cad;
  cin >> cad;

size_t posicion1 = cad.find("1111111");
size_t posicion0 = cad.find("0000000");

if(posicion1 != string::npos || posicion0 != string::npos){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


  return 0;
}
//string::npos es una constante estática definida en la clase string de C++. Esta constante representa el valor 
//máximo posible de size_t, que es el tipo de datos utilizado para representar la posición de los caracteres en una cadena

