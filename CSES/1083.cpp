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
    int n,x,y;
    cin>>n;
    x=y=0;
    for(int i=1;i<=n;i++)x^=i;
    for(int i=1;i<n;i++){
			int k;
			cin>>k;
			y^=k;
		}
		int ans = x^y;
		cout<<ans;
}
 
