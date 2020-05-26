#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int three = n/3;
	int five = n/5;
	int fifteen = n/15;
	cout << n - three - five + 2*fifteen;
	return 0;
}
