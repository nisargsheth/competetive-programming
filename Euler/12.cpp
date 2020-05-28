#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define nxt "\n"
#define intpair pair<int,int>
using namespace std;
inline int add(int a,int b){a+=b;if(a>=mod)a-=mod;return a;}
inline int mul(int a,int b){return (a*1ll*b)%mod;}
inline int pow(int a,int b){int rt=1;while(b>0){if(b&1)rt=mul(rt,a);a=mul(a,a);b>>=1;}return rt;}
inline bool sortinrev(const pair<int,int> &a,const pair<int,int> &b){return (a.first > b.first);} //sort pair in descending order
inline ll gcd(ll a, ll b){if (b == 0) return a;return gcd(b, a%b);}
inline ll lcm(ll a, ll b){return (a*b)/gcd(a, b);}
inline int ctoi(char c){return c-48;}
inline char itoc(int n){return n+'0';}  
int countFactor(int n){
	int cnt = 0,fc=1;
	while(n%2==0){
		++cnt;
		n/=2;
	}
	fc *= cnt+1;
	for(int i=3;i*i<=n;i+=2){
		cnt=0;
		while(n%i == 0){
				++cnt;
				n/=i;
		}
		fc *= (cnt+1);
	}
	
	if(n>1)return fc*2;
	return fc;
}
int main(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);//3 4
    int n;
    for(int i=1;;i++){
				n = i*(i+1)/2;
				if(countFactor(n) > 500){
					cout<<n;
					break;	
				}
		}
}
 
