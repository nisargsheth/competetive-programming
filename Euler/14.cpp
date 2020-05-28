#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define nxt "\n"
#define intpair pair<int,int>
using namespace std;
int main(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);//3 4
    ll n = 1000000;
    vector<ll> len(n+1);
    len[1] = 0;
    for(int i=2;i<=n;i++){
		 ll temp = i,cnt=0;
			while(temp!=1){
				if(temp<=n && len[temp]!=0){
						break;
				}
				else if(temp&1) temp = 3*temp+1;
				else temp /=2;
				++cnt;
			}
			len[i] = len[temp] + cnt;
		}
		int max=-1,ans;
		for(int i=1;i<=n;i++){
			if(len[i] > max){
				max = len[i];
				ans = i;
			}
		}
		cout<<ans<<" "<<max;
		cout<<endl<<len[837799];
}
 
