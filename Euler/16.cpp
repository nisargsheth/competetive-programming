#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define nxt "\n"
using namespace std;
inline int ctoi(char c){return c-48;}
int main(){
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);//3 4
    int n=1000;
    char str[302];
    sprintf(str,"%.0Lf", exp2((long double) n));
   cout<<str<<endl;
   int ans = 0;
   for(int i=0;i<302;i++){
		  ans += ctoi(str[i]);
		}
		cout<<ans;
}
 
