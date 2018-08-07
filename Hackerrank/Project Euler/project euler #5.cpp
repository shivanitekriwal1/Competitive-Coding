#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int gcd(int a , int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

long long int findlcm(vector<int> vect, int n){
    long long int ans = vect[0];
    
    for(int i=1; i<n; i++)
        ans = (((vect[i]* ans))/(gcd(vect[i], ans)));
    
    return ans;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        vector<int> A;
        cin >> n;
        for(int i=1 ;i<=n; i++){
            A.push_back(i);
        }
        cout<<findlcm(A,n)<<endl;
    }
    return 0;
}