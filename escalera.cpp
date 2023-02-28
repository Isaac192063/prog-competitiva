#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){

int pos;
cin>>pos;
int esc[pos];
pos--;
while(pos>=0){
    cin>>esc[pos];
    pos--;
}
int s = 0, s1=0;
int l=0, r =0;
for(int i=0; i<sizeof(esc)/sizeof(esc[0]); i++){
    for(int j=i; j<sizeof(esc)/sizeof(esc[0]); j++){
            if(i!=j){
                if(esc[i] == esc[j]){
                    l =i;
                    r = j;
                    for(int k=l; k<r; k++){
                        if(esc[i]<esc[k]){
                            s1++;
                        }
                    }
                    if(s1==0){
                        for(int k=l; k<r; k++){
                            if(esc[i]>esc[k]){
                                s++;
                            }
                        }
                    }

                }
            }

    }
}
cout<<s<<endl;



return 0;
}
