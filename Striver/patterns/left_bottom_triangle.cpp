#include <iostream>
#include<string>
using namespace std;

// star pattern
void nForest(int n) {
	for(int i = 0; i < n; i++){
		cout << string(i+1, '*') << endl;
	}
}

// number pattern
void numberForest(int n) {
	for(int i = 1; i < n+1; i++){
        int k = 1;
        for(int j = 0; j < i; j++){
            cout << k;
            k++;
        }
        cout << endl;
	}
}

// row number pattern
void rowForest(int n) {
    int k = 1;
	for(int i = 1; i < n+1; i++){
        for(int j = 0; j < i; j++){
            cout << k;
        }
        k++;
        cout << endl;
	}
}

int main() {
	nForest(4);
    numberForest(4);
    rowForest(4);
	return 0;
}