// passed
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m, k;
		cin>>n>>m>>k;
		if(n < m){
			if((n+k) <= m){
				cout<<m-(n+k)<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else if(n == m){
			cout<<m-n<<endl;
		}
		else{
			if((m+k) <= n){
				cout<<n-(m+k)<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
	}
	return 0;
}
