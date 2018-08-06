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
    long N,num,three,five,fifteen=0;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>num;
        //int sum=0;
        three=(num-1)/3;
        five=(num-1)/5;
        fifteen=(num-1)/15;

        cout << 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2)<<endl;

    }
    return 0;
}