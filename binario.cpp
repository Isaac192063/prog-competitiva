#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int s;
	int tereas[s];
	cin>>s;
	for(int i =0; i<s; i++){
		cin>>tereas[i];
	}
	
	int a =0, b =0, c=0;
	for(int i=0; i<s; i++){
		for(int j=i; j<s; j++){
			if(tereas[i] == tereas[j]){
				a = i; 
				b = j;
				cout<<"h"<<endl;
				for(int k = i; k < j; k++){
					if(tereas[a] < tereas[k]){
						c++;
					}
				}
			}
		}
		
	}
	
	cout<<c<<endl;
	
	return 0;
}