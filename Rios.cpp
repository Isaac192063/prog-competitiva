#include <bits/stdc++.h>

using namespace std;

int main(){

string cad;
cin>>cad;
int may =0, sol =0, s=0;
for(int i =0; i<cad.length(); i++){
    if(cad[i] == '0'){
       may++;
    }else{
        if(may>sol){
            sol = may;
            may =0;
        }
    }
}

if(sol%2==0){
    s = (int)(sol/2);
}else{
    s = (int)(sol/2)+1;
}
cout<<s<<endl;


return 0;
}
