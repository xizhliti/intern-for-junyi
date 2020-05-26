#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string rever(string a){
	reverse(a.begin(), a.end());
	return a;
} 

int main(){
	string a;
	cin >> a ;
	cout << rever(a);
	return 0;
}
