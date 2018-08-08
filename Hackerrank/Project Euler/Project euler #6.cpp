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
    long long t;
    cin >> t;
    for(long long a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long sum_of_n = (n*(n+1))/2;
        long long square_of_sum_of_n = sum_of_n*sum_of_n;
        long long sum_of_sq = (n*(n+1)*(2*n+1))/6;
        cout << (square_of_sum_of_n - sum_of_sq) << endl;
    }
    return 0;
}