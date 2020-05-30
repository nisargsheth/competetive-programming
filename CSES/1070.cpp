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
  int n;
  cin>>n;
  if(n==1){
			cout<<"1";
			return 0;
		}
		if(n==4){
			cout<<"2 4 1 3";
			return 0;
		}
  if(n<5){
			cout<<"NO SOLUTION";
			return 0;
		}
  for(int i=1;i<=n;i+=2)cout<<i<<" ";
  for(int i=2;i<=n;i+=2)cout<<i<<" ";
}
 
