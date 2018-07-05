#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    int diff = INT_MAX;
    vector<int> A;
    vector<int> ans;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.begin()+n);
    for(int i=0; i<n-1; i++){
        if(A[i+1]-A[i]<diff){
            diff = A[i+1]-A[i];
        }
    }
    for(int i=0; i<n-1; i++){
        if(A[i+1]-A[i]==diff){
            ans.push_back(A[i]);
            ans.push_back(A[i+1]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}