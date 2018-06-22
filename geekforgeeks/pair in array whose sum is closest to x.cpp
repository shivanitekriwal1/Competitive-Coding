#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> A;
    int a,x, sum=INT_MIN, diff=INT_MAX, l=0, r, res_l, res_r;
    r = A.size()-1;
    for(int i=0; i<=A.size(); i++){
        cin >> a;
        A.push_back(a);
    }
    cin >> x;
    
    while(r>1){
        if(abs(A[l]+A[r]-x)<diff)
        {
            diff = abs(A[l]+A[r]-x);
            res_l = l;
            res_r = r;
        }
          
        if(A[l]+A[r]>x){
              r--;
        }
        else{
          l++;
          }
      }
    cout << A[res_l] << " " << A[res_r];
    return 0;
    
    }
