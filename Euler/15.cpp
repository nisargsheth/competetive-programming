#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define nxt "\n"
#define intpair pair<int,int>
using namespace std;
ll fact(){
	ll ans = 1;
	for(int i=20;i>1;i--){
		ans *= i;
	}
	return ans;
}  
int main(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);//3 4
    ll f=1;
    for(int i=40;i>20;i--){
			f *= i;
		}
		cout<<f<<" "<<fact();
}
 
