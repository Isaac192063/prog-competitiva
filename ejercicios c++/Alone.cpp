#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define PB push_back
#define ZERO (1e-10)
#define INF int(1e9+1)
#define CL(A,I) (memset(A,I,sizeof(A)))
#define DEB printf("DEB!\n");
#define D(X) cout<<"  "<<#X": "<<X<<endl;
#define EQ(A,B) (A+ZERO>B&&A-ZERO<B)
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define IN(n) int n;scanf("%d",&n);
#define FOR(i, m, n) for (int i(m); i < n; i++)
#define F(n) FOR(i,0,n)
#define FF(n) FOR(j,0,n)
#define FT(m, n) FOR(k, m, n)
#define aa first
#define bb second
int p[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271},P=58,M=14,T;
#define TM std::chrono::high_resolution_clock::now()
#define DF(A,B) ll(std::chrono::duration_cast<std::chrono::seconds>(B-A).count())
ll go(int i){
    if(p[i]==T)return 1;
    ll S=0,b=p[i++];
    while(p[i]<=T&&b+M>=p[i])S+=go(i++);
    return S;
}
map<int,ll> A={ {2,1}, {3,1}, {5,2}, {7,4}, {11,8}, {13,16}, {17,31}, {19,61}, {23,116}, {29,208}, {31,416}, {37,740}, {41,1364}, {43,2728}, {47,4832}, {53,8924}, {59,13756}, {61,27512}, {67,50192}, {71,91460}, {73,182920}, {79,324572}, {83,598952}, {89,923524}, {97,1522476}, {101,2446000}, {103,4892000}, {107,8860476}, {109,17720952}, {113,33919428}, {127,33919428}, {131,33919428}, {137,67838856}, {139,135677712}, {149,203516568}, {151,407033136}, {157,610549704}, {163,1221099408}, {167,1831649112}, {173,3052748520}, {179,4884397632}, {181,9768795264}, {191,14653192896}, {193,29306385792}, {197,43959578688}, {199,87919157376}, {211,131878736064}};
int main(void){
    IN(_)printf("%lld\n",A[_]);

    return 0;
}