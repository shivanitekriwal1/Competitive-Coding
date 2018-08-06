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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n,m,i;
        cin >> n;
        while(n%2==0){
            n=n/2;
            m=n;
        }
        for(i=3; i<=sqrt(n); i+=2){
            while(n%i==0){
                n=n/i;
            }
        } 
        if(n==1)
            cout << (i-2) << endl;
        else if(n>2)
            cout << n << endl;
    }
    return 0;
}