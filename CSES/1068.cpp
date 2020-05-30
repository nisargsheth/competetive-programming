#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod=1000000007;
typedef pair<int,int> intpair;
typedef vector<int> vi;
typedef vector<string> vs;
int main(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans;
    cin>>n;
    ans = n;
    while(ans!=1){
			cout<<ans<<" ";
			if(ans&1) ans = 3*ans + 1;
			else ans/=2;
		}
		cout<<ans;
}
 
