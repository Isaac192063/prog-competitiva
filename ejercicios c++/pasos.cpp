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

int num, s=0, p=0, cnum;
cin >> num;
cnum = num;
while(num!=s){
    if(cnum>=5){
    	cnum-=5;
    	
        s+=5;
    }else if(cnum>=4){
    	cnum-=4;
        s+=4;
    }else if(cnum>=3){
        	cnum-=3;
        s+=3;
    }else if(cnum>=2){
        	cnum-=2;
        s+=2;
    } else if(cnum>=1){
        	cnum-=1;
        s+=1;
    }
    
    p++;
}
cout<<p;


  return 0;
}