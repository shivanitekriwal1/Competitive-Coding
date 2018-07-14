#include <iostream>
#include <vector>
using namespace std;

void leader(vector<int> A){
    int j;
    for(int i=0; i<A.size()-1; i++){
        for(j=i+1; j<A.size(); j++){
            if(A[j]>A[i])
                break;
        }
        if(j==A.size())
            cout << A[i] << " ";
    }
}

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,a;
	    vector<int> A;
	    vector<int> ans;
	    cin >> n;
	    for(int i=0; i<n; i++){
	        cin >> a;
	        A.push_back(a);
	    }
	    leader(A);
	    cout << A[n-1] << endl;
	}
	return 0;
}