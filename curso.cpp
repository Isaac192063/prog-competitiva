#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, p, m;
    cin>>p;
    for(int k=0; k<p; k++)
    {
        cin>>n;
        int num[n];
        cin>>m;

        for(int i=0; i<n; i++)
        {
            cin>>num[i];
        }

        //ordenar el array
        int aux=0;

        for(int o=0; o<n; o++)
        {
            for(int h=0; h<n; h++)
            {
                if(num[h]>num[h+1])
                {
                    aux = num[h];
                    num[h] = num[h+1];
                    num[h+1] = aux;
                }
            }
        }

        float s=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i-1; j<n; j++)
            {
                s+=(float)((float)(num[j])/(float)(j+1));

            }
        }
        cout<<"el numero es "<<s<<" y m es "<<m<<endl;

        if(m==s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
