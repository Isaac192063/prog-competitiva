#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int busqudaBinary( int left,int tam, int num ){
	 long long int a=0,b=1,c;
	int arry [tam];
	for(int i=0; i<tam; i++){
		c = a + b;
		b = a;
		a = c;
		arry[i] = c;
	}	
	
		int right = sizeof(arry)/sizeof(arry[0])-1;
	
	
	
  while(left<=right){
    int medio = left + (right-left)/2;
    if(arry[medio] == num){
      return medio;
    }else if(arry[medio]<num){
      left = medio+1;
    }else{
      right = medio -1;
    }
  }
  return -1;
}

int main(){
	

	int num;
	cin>>num;


	                          
	int tam = num+3;
	if(num==1){
		cout<<1;
	}else{
		
	cout <<(busqudaBinary( 0, tam, num)+1);
	}
	
	return 0;
}