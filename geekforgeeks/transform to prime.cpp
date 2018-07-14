#include <iostream>
using namespace std;

bool prime(int n){
    int count=0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0)
            count+=1;
    }
    if(count>0)
        return false;
    else
        return true;
}

int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n,a, sum=0;
	    cin >> n;
	    vector<int> A;
	    for(int i=0; i<n; i++){
	        cin >> a;
	        A.push_back(a);
	    }
	    for(int i=0; i<n; i++){
	        sum += A[i];
	    }
	    if(prime(sum)){
	        cout << "0" << endl;
	        break;
	    }
	    else{
	        while(true){
	            sum++;
	            if(prime(sum)){
	                cout << sum << endl;
	                break;
	            }
	    }
	    }
	}
	return 0;
}