#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, p, q;
		cin >> a >> b >> p >> q;
		if (p % a == 0 && q % b == 0) {
			int alice_work_days = p / a;
			int bob_work_days = q / b;
			if ((max(alice_work_days, bob_work_days) - min(alice_work_days, bob_work_days)) <= 1)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else{
			cout<<"no"<<endl;
		}


	}
	return 0;
}