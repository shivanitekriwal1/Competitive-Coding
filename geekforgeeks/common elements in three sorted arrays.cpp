#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    vector<int> A;
    vector<int> B;
    vector<int> C;
    int a,i=0, j=0, k=0,x;
    vector<int> V;
    
    for(int i=0; i<A.size(); i++){
        cin >> a;
        A.push_back(a);
    }
    
    for(int i=0; i<B.size(); i++){
        cin >> a;
        A.push_back(a);
    }
    
    for(int i=0; i<C.size(); i++){
        cin >> a;
        A.push_back(a);
    }

    
    while(i<A.size() && j<B.size() && k<C.size()){
        if(A[i]==A[j] && A[j]==A[k]){
            V.push_back(A[i]);
        }
        else if(A[i]<A[j]){
            i++;
        }
        else if(A[j]<A[k]){
            j++;
        }
    }
    for(int i=0; i<V.size(); i++){
        cout << V[i];
    }
}
    

