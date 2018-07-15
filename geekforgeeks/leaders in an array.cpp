#include <iostream>
#include <vector>
using namespace std;

void leader(vector<int> A){
    for(int i=0; i<A.size(); i++){
        int j;
        for(j=i+1; j<A.size(); j++){
            if(A[j]>=A[i])
                break;
        }
        if(j==A.size())
            cout << A[i] << " ";
}
}

int main() {
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n,a;
        vector<int> A;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            A.push_back(a);
        }
        leader(A);
        cout << endl;
    }
	return 0;
}