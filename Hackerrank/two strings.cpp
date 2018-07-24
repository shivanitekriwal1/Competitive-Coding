#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string a,b;
        cin >> a >> b;
        string x = "NO";
        string ans = "abcdefghijklmnopqrstuvwxyz";
        for(int j=0; j<ans.length(); j++){
            if(a.find(ans[j])!=string::npos && b.find(ans[j])!=string::npos){
                x = "YES";
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
