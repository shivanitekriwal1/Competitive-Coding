#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,a;
        vector<int> A;
        cin>>n ;
        for(int i=0; i<n;i++){
            cin>>a;
            A.push_back(a);
        }
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(A[i]>A[j]){
                    count+=1;
                }
            }
        }
        if(count%2==0){
            cout<< "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
    return 0;
}
