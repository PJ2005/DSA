#include <iostream>
#include<string>
using namespace std;

void nForest(int n) {
	for(int i = n; i > 0; i--){
		cout << string(i, '*') << endl;
	}
}

void numberForest(int n) {
    for(int i = n; i > 0; i--) {
        int k = 1;
        for(int j = i; j > 0; j--){
            cout << k;
            k++;
        }
        cout << endl;
    }
}

int main() {
	nForest(4);
    numberForest(5);
	return 0;
}