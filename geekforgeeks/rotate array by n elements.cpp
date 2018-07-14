#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,a,x;
	    vector<int> A;
	    vector<int> ans;
	    cin >> n;
	    for(int i=0; i<n; i++){
	        cin >> a;
	        A.push_back(a);
	    }
	    cin >> x;
	    for(int i=0; i<=x; i++){
	        ans.push_back(A[i]);
	    }
	    int k=0;
	    for(int j=x; j<n; j++){
	        A[k]=A[j];
	        k++;
	    }
	    int y=0;
	    for(int i=n-x; i<n; i++){
	        A[i]=ans[y];
	        y++;
	    }
	    for(int i=0; i<n; i++){
	        cout << A[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}