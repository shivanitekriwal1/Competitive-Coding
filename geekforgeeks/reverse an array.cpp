#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n,a;
	    vector<int> A;
	    cin >> n;
	    for(int i=0; i<n; i++){
	        cin >> a;
	        A.push_back(a);
	    }
	    reverse(A.begin(), A.end());
	    for(int i=0; i<n; i++){
	        cout << A[i] << " ";
	    }
	}
	return 0;
}