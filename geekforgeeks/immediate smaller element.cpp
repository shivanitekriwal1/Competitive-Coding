#include <iostream>
#include <vector>
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
	    for(int i=0; i<n-1; i++){
	        if(A[i]>A[i+1]){
	            cout << A[i+1]<< " ";
	        }
	        else{
	            cout << -1 << " " ;	        
	        }
	    }
	    cout << -1 << endl;
	    
	}
	return 0;
}