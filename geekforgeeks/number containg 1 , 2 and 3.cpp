#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool digit(int n){
    while(n>0){
        int rem = n%10;
        if(rem!=1 && rem!=2 && rem!=3){
            return false;
        }
        else{
            n = n/10;
        }
    }
    return true;
}

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n,a;
	    vector<int> A;
	    vector<int> ans;
	    cin >> n;
	    for(int j=0; j<n; j++){
	        cin >> a;
	        A.push_back(a);
	    }
	    for(int i=0; i<n; i++){
	        if(digit(A[i])){
	            ans.push_back(A[i]);
	        }
	    }
	    if(ans.empty()){
	        cout << -1 << endl;
	    }
	    else{
	        sort(ans.begin(), ans.end());
	        for(int k=0; k<ans.size(); k++){
	            cout << ans[k] << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}