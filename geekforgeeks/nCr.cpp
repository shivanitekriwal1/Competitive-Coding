#include <vector>
#include<iostream>
using namespace std;

int fact(int n){
    if (n==0)
    return 1;
    if (n>0)
    return n*fact(n-1);
}

int NCR(int n, int r){
    if(n==r) return 1;
    if(r==0 && n>0)
    return 1;
    if(n>0 && r>0){
        return (n*fact(n-1))/((r*fact(r-1))*((n-r)*fact(n-r-1)));
    }
}

int main() {
	int t, result; 
	cin >> t;
	for(int i=0; i<t; i++){
	    int n,r;
	    vector<int> V;
	    cin >> n;
	    cin >> r;
	    V.push_back(n);
	    V.push_back(r);
	    result = NCR(n,r);
	    cout << result;
	}
	return 0;
}