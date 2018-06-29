#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    vector<int> A;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>a;
        A.push_back(a);
    }
    int x, index,i;
    for(int i=0; i<n-1; i++){
        if(A[i]>A[i+1]){
            x = A[i+1];
            index = i;
            break;
        }
    }
    for(i=index; i>=0; i--){
        if(A[i]>x){
            A[i+1]=A[i];
            for(int j=0; j<n; j++){
                cout << A[j] << " ";
            }
            cout << endl;
        }
        else if(A[i]<x){
            A[i+1]=x;
            for(int j=0; j<n; j++){
                cout << A[j] << " ";
            }
            cout << endl;
            break;
        }
        
        if(i==0){
            A[0]=x;
            for(int j=0; j<n; j++){
                cout << A[j] << " ";
            }
        }
    }
}



