#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void saludar(string nombre){
	cout<<"hola"<<nombre;
}

int busquedaBinaria(int array[],int left,int right, int num){
	while(left<=right){
		int med = left + (right-left)/2;
		if(array[med] == num){
			return med;
		}else if(left<right){
		left = med +1	;	
		}else{
		right = med-1;
		}
	}
	return -1;
}

int busquedaLineal(int array[], int pal){
	for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
		if(array[i] == pal){
			return i;
		
		}
	}
	return -1;
}


int main(){
	string nombre = "hola como estas soy yo isawack";
	size_t hermano = nombre.find(",");
	
	if(hermano != string::npos){
		cout<<"si esta"<<endl;
	}else{
		cout<<"no esta"<<endl;
	}
	
	int array[] = {1,5,8,4,7,3,6,8};
//	sort(array, array+ sizeof(array)/sizeof(array[0]));
	
//	for(int i =0; i<sizeof(array)/sizeof(array[0]); i++){
//	cout<<array[i]<<endl;
//	}
	
//	cout<<"la posicion es : "<<busquedaBinaria(array,0, sizeof(array)/sizeof(array[0])-1,8);
	cout<<"la posicion es: "<<busquedaLineal(array, 5);
}
