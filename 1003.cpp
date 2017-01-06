#include <iostream>

using namespace std; 

int zc;
int oc; 

int fib(int n) {
	if(n == 0) {
		zc += 1;
		return 0;
	} else if(n == 1) {
		oc += 1;
		return 1;
	}
	return (fib(n-1) + fib(n-2));
}

int main() {
	zc = oc = 0;
	int n, m;
	cin >> m;

	for(int i=0; i<m; i++) {
		cin >> n;	
		fib(n);
		cout << zc << " " << oc << endl;
		zc = oc = 0; 
	}

	return 0;
}