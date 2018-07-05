#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    vector<int> A;
    for(int i=0; i<n; i++){
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.begin()+n);
    int num = (n/2);
    cout << A[num];
    return 0;
}