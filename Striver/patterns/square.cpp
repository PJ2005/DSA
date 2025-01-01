#include <iostream>
#include<string>
using namespace std;

void nForest(int n) {
	for(int i = 0; i < n; i++){
		cout << string(n, '*') << endl;
	}
}

int main() {
	nForest(4);
	return 0;
}