#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n,a;
	    cin >> n;
	    vector<int> A;
	    for(int i=0; i<n; i++){
	        cin >> a;
	        A.push_back(a);
	    }
	    sort(A.begin(), A.begin()+n);
	    for(int i=0; i<n; i++){
	        cout << A[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}