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
    string s;
    cin>>s;
    int len = s.length(),ans=1,cnt=1;//ATTCGGGA
    if(len==0){
			cout<<"0";
			return 0;
		}
    for(int i=1;i<len;i++){
			if(s[i-1] == s[i])++cnt;
			else{
				ans = max(ans,cnt);
				cnt = 1;
			}
		}
		ans = max(ans,cnt);
		cout<<ans;
}
 
