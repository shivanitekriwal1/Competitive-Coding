#include <iostream>
using namespace std;
 
int change0to5(int n){
    if (n==0){
        return 0;
    }        
    int rem = n%10;
    if(rem == 0)
        rem = 5;
    return change0to5(n/10)*10 + rem;
    }
    
int change(int n){
    if(n==0)
        return 5;
    else return change0to5(n);
}
    
int main(){
    int n;
    cin >> n;
    int ans = change0to5(n);
    cout << ans;
    return 0;
}