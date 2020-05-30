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
    ll n,prev,cur,cnt=0;
    cin>>n;
    cin>>prev;
    for(int i=1;i<n;i++){//3 2 5 1 7
			cin>>cur;
			if(cur < prev)cnt+=(prev-cur);
			else{
				prev = cur;
			}
		}
		cout<<cnt;
}
 
