#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> A (n);
        fill(A.begin(), A.end(), 0);
        for(int j=1; j<=n; j++){
            for(int k=1; k<=j; k++){
                if(j%k==0){
                    if(A[j-1]==0)
                        A[j-1]=1;
                    else
                        A[j-1]=0;
                }
                    
            }
}
        for(int x=0; x<A.size(); x++)
           cout << A[x] << " ";
        cout << endl;
       }

    return 0;
}